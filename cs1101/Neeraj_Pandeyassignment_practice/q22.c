#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* 
 * Write a program that accepts integers until the user enters 0, and display the largest of all numbers.
*/
int main() {
    int max = 0, val;
    printf("Enter the integer value: \n" );
    while(1) {
        scanf("%d", &val);
        if (val == 0) {
            break;
        }
        if (val > max) {
            max = val;
        }
    }
    printf("Maximum value is: %d \n", max);
    return 0;
}
