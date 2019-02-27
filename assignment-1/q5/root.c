#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int checkPower (int x, int n) {
  int final = pow(x, 1./n);
  if (final >= 0) {
    printf("Root of the given number is: %d \n", final);
  } else {
    printf("Error");
  }
  return 1;
}

int main(){
    int x; //Number whose root we have to find
    int n; //The root to find, e.g 2 means you have to compute the square root
    scanf("%d", &x);
    scanf("%d", &n);

    //Your code here
    checkPower(x, n);

    return 0;
}
