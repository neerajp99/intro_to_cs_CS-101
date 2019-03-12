#include <stdio.h>
#include <stdlib.h> // For exit()
#include <string.h>
int main(){
	char fname[100];//Name of text file to be changed
	char foutn[100];//Name of the output text file
	int n;//Number to be removed from the file
	fgets(fname, 100, stdin);
	fgets(foutn, 100, stdin);
	scanf("%d", &n);
	printf("%d\n", n);

	//Your code here

	//Declaring the a pointer of file type to both input and output files
  FILE *inputFile;
	FILE *outputFile;
  char c;

	//fgets retain the newline character, so we add one for input filename
	fname [ strcspn(fname, "\r\n") ] = 0;

 	//Opening the input file in read mode
	inputFile = fopen(fname, "r");

	//fgets retain the newline character, so we add one for output filename
	foutn [ strcspn(foutn, "\r\n") ] = 0;

	//Opening the output file in write mode
	outputFile = fopen(foutn, "w");

	if (inputFile == NULL) {
		printf("%s\n", "Cannot open file");
		exit(0);
	}

	c = fgetc(inputFile);
	while (c != EOF)
	{
			printf ("%c", c);
			c = fgetc(inputFile);
	}

	fclose(inputFile);
	fclose(outputFile);


	return 0;
}
