#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
 * Write a program that accepts three integers from the user and displays the largest of the three numbers.
*/
int main() {
    int val1, val2, val3;
    printf("Enter the first integer value: ");
    scanf("%d", &val1); 

    printf("Enter the third integer value: ");
    scanf("%d", &val2); 

    printf("Enter the third integer value: ");
    scanf("%d", &val3); 

    if ((val1 >= val2) && (val1 >= val3)) {
        printf("Value 1 is the largest! Value is: %d \n", val1);
    }
    else if ((val2 >= val1) && (val2 >= val3)) {
        printf("Value 2 is the largest! Value is: %d \n", val2);
    } else {
        printf("Value 3 is the largest! Value is: %d \n", val3);
    }

    return 0;
}
