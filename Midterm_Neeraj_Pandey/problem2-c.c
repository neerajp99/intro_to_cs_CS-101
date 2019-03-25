#include <stdio.h>
#include <string.h>

int main () {
  //initialize a string with 100 characters
  char x[100]={};
  //input the string from the user
  fgets(x, 100, stdin);
  //print the string
  // printf("Output String: %s\n", x);

  //looping through and reversing the string while chekcing for vowels
  for (int i = strlen(x) -1 ; i > 0 ; i--) {
    if (x[i] != 'a' && x[i] != 'e' && x[i] != 'i' && x[i] != 'o' && x[i] != 'u' ) {
      printf("%c", x[i]);
    }
  }
  printf("\n");

  return 0;
}
