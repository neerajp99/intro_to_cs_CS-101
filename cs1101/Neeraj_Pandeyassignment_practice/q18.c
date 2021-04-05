#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
 * Write a program to find the factorial of a number:
 * (a)using a for loop
 * (b) using a while loop
 * (c) using a do-while loop
*/
int main() {
    int val, index = 1;
    long long int factorial = 1;
    printf("Enter the value of number: ");
    scanf("%d", &val);

    // Handling edge cases 
    if (val < 0) {
        printf("N is smaller than 0. Please enter a positive number.");
        return 0;
    }
    /*
     * Using FOR loop
    */
    for (int i = 1 ; i <= val ; i++) {
        factorial = factorial * i;
    }
    printf("Factorial value using FOR loop: %lli \n", factorial);

    /*
     * Using WHILE loop
    */
    factorial = 1, index = 1;
    while (index <= val) {
        factorial = factorial * index;
        index += 1;
    }
    printf("Factorial value using WHILE loop: %lli \n", factorial);

    /*
     * Using do-while loop
    */
    factorial = 1, index = 1;
    do {
        factorial = factorial * index;
        index += 1;
    }while (index <= val);
    printf("Time taken %lld", time_taken);
    printf("Factorial value using DO-WHILE loop: %lli \n", factorial);

    return 0;
}
