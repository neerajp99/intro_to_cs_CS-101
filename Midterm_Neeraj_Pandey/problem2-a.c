#include <stdio.h>
#include <string.h>

int main () {
  //initialize a string with 100 characters
  char x[100]={};
  //input the string from the user
  fgets(x, 100, stdin);
  //print the string
  printf("Output String: %s\n", x);

  return 0;
}
