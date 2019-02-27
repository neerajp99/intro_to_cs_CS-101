#include <stdio.h>
int main () {
      double firstNumber, secondNumber, temporaryVariable;
      printf("Enter first number: ");
      scanf("%lf", &firstNumber);
      printf("Enter second number: ");
      scanf("%lf",&secondNumber);

      //using the temp variable here and
      //swapping the first number with the second one
      temporaryVariable = firstNumber;
      firstNumber = secondNumber;
      secondNumber = temporaryVariable;


      printf("\nfirstNumber = %.2lf\n", firstNumber);
      printf("secondNumber = %.2lf\n", secondNumber);
      return 0;
}
