#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
 * Write a program to find the product of the first n natural numbers (take n as input from the user).
*/
int main() {
    int value;
    long long product = 1;
    printf("Enter the value of N: ");
    scanf("%d", &value);

    // Handling edge cases 
    if (value < 1) {
        printf("N is smaller than 1!");
        return 0;
    }

    // Loop over and get the product value
    for (int i = 1 ; i <= value ; i++) {
        product = product * i;
    }
    printf("Product of %d natural numbers is: %lld \n", value, product);
    return 0;
}
