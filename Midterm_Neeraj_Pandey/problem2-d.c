#include <stdio.h>
#include <string.h>

int main (){

  //initialize a string with 100 characters
  char x[100]={};
  //input the string from the user
  fgets(x, 100, stdin);
  //print the string
  // printf("Output String: %s\n", x);
  FILE *inputFile;
  FILE *outputFile;
  inputFile = fopen("ae.txt", "w");
  //looping through and reversing the string while chekcing for vowels

    for (int i = strlen(x) -1 ; i > 0 ; i--) {
      if (x[i] != 'a' && x[i] != 'e' && x[i] != 'i' && x[i] != 'o' && x[i] != 'u' ) {
        fprintf(inputFile, "%c", x[i]);
      }
    }
  char getWord[100];
  fclose(inputFile);
  inputFile = fopen("ae.txt", "r");
  outputFile = fopen("aeiot.txt", "w");
  while (fscanf(inputFile, "%1023s", getWord ) == 1) {
    int ctr = 0;
    for (int j = 1 ; j <= 100 ; j++){
      fprintf(outputFile, "%d%s%s\n", j, ": ", getWord );
    }
  }
  printf("\n");
 fclose(inputFile);
 fclose(outputFile);
  return 0;
}
