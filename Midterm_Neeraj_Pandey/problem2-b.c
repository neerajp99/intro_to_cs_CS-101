#include <stdio.h>
#include <string.h>

int main () {
  //initialize a string with 100 characters
  char x[100]={};
  //input the string from the user
  fgets(x, 100, stdin);
  // //print the string
  // printf("Output String: %s\n", x);

  //looping through each character and checking for vowels
  for (int i = 0 ; i < strlen(x) ; i++) {
    if (x[i] != 'a' && x[i] != 'e' && x[i] != 'i' && x[i] != 'o' && x[i] != 'u' ) {
      printf("%c", x[i]);
    }
  }
  return 0;
}
