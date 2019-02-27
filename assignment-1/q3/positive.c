#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float positivefunction(input) {
  if (abs(input) == input) {
    printf("it's positive \n");
  } else {
    input = input * (-1);
    printf("Converted to positive: %d\n", input);
  }
  return 1;
}
int main () {
  float input;
  printf("Enter first number: ");
  scanf("%f", &input);
  positivefunction(input);
  return 0;
}
