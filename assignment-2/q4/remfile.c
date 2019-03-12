#include <stdio.h>
#include <stdlib.h> // For exit()
#include <string.h>
#define MAX 100000
int main(){
	char fname[100];//Name of text file to be changed
	char foutn[100];//Name of the output text file
	int n;//Number to be removed from the file
	printf("%s\n", "Enter Input file name: " );
	fgets(fname, 100, stdin);
	printf("%s\n", "Enter Output file name: ");
	fgets(foutn, 100, stdin);
	printf("%s\n", "Enter number to check and replace the word: " );
	scanf("%d", &n);

	//Your code here
	//Changing the input number to char to comapre it with other characters
	char s = n + '0';

	//Declaring the a pointer of file type to both input and output files
  FILE *inputFile;
	FILE *outputFile;

	//Initializing getWord with a size of 100 maximum characters.
	char getWord[MAX];

	//fgets retain the newline character, so we add one for input filename
	fname [ strcspn(fname, "\r\n") ] = 0;

 	//Opening the input file in read mode
	inputFile = fopen(fname, "r");

	//fgets retain the newline character, so we add one for output filename
	foutn [ strcspn(foutn, "\r\n") ] = 0;

	//Opening the output file in write mode
	outputFile = fopen(foutn, "w");

	//Checking if the input file exists or not
	if (inputFile == NULL) {
		printf("%s\n", "Cannot open file");
		exit(0);
	}
	if (outputFile == NULL) {
		printf("%s\n", "No Output File Available");
		exit(1);
	}

	//Looping over and getting word by word
	while (fscanf (inputFile, "%1023s", getWord ) == 1 ) {
		//Initialized counter as 0 initially every time it comes inside while loop
		int ctr = 0;

		//Looping over each character of the word and increasing the counter if
		//the number that is to be checked is not present
		for (int i = 0 ; i < strlen(getWord) ; i++ ) {
			if (getWord[i] != s) {
				ctr++;
			}
		}
		//if counter is less than the string length, addd the complete word to the output file
		if (ctr == strlen(getWord) ) {
			fprintf(outputFile, "%s ", getWord );
		}
	}
	//Close the output file
	fclose(outputFile);
	//Close the input file
	fclose(inputFile);

	return 0;
}
