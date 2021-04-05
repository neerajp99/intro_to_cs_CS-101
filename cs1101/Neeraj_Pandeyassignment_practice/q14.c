#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
 * Write a program to check if a number is odd or even (Hint: use the modulo operator to check for remainder)
*/
int main() {
    int value;
    printf("Enter the value of N: ");
    scanf("%d", &value);

    if (value % 2 == 0) {
        printf("Number is even! \n");
    } else {
        printf("Number is odd! \n");
    }

    return 0;
}
