#include <stdio.h>
int main(char s){
	char fname[100];//Name of text file to be changed
	char foutn[100];//Name of the output text file
	int n;//Number to be removed from the file
	fgets(fname, 100, stdin);
	scanf("%d", &n);
	printf("%d", n);

	//Your code here

  FILE *inputFile;

	inputFile = fopen(fname, "r")

	if (inputFile == NULL) {
		printf("The file does not exist" );
		exit(0);
	} else {
		if ()
	}



	return 0;
}
