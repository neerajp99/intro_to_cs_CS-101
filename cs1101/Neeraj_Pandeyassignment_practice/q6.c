#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
 * Write a program that accepts two integers and find the quotient and remainder of the division of the two.
*/
int main() {
    int val1, val2, quotient, remainder;
    printf("Enter the first integer value: ");
    scanf("%d", &val1); 

    printf("Enter the second integer value: ");
    scanf("%d", &val2); 

    quotient = val1 / val2;
    remainder = val1 % val2;
    printf("Quotient: %d, Remainder: %d \n", quotient, remainder);
    return 0;
}