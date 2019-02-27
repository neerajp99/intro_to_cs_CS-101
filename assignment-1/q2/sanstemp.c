#include <stdio.h>
int main()
{
      double firstNumber, secondNumber;

      printf("Enter first number: ");
      scanf("%lf", &firstNumber);

      printf("Enter second number: ");
      scanf("%lf",&secondNumber);

      // write code here that will produce the given output
      firstNumber = firstNumber + secondNumber;
      secondNumber = firstNumber - secondNumber;
      firstNumber = firstNumber - secondNumber;



      printf("\nfirstNumber = %.2lf\n", firstNumber);
      printf("secondNumber = %.2lf\n", secondNumber);

      return 0;
}
