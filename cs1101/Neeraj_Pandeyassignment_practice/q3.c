#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    int val1, val2;
    printf("Enter first integer value (a): ");
    scanf("%d", &val1);  
    printf("Enter second integer value(b): ");
    scanf("%d", &val2);

    /*
     * Addition (a + b)
    */
    int add = val1 + val2; 
    printf("a + b = %d\n", add);

    /*
     * Subtraction (a - b)
    */
    int subtract = val1 - val2; 
    printf("a - b = %d\n", subtract);

    /*
     * Multiplication (a * b)
    */
    int multiply = val1 * val2; 
    printf("a * b = %d\n", multiply);

    /*
     * Divide (a / b)
    */
    double divide = (double)val1 / (double)val2; 
    printf("a / b = %lf\n", divide);

    /*
     * Mod (a % b)
    */
    double mod = val1 % val2; 
    printf("a mod b = %lf\n", mod);

    return 0;
}
