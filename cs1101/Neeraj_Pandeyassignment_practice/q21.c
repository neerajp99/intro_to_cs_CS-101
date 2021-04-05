#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
 * Write a program that accepts integers until the user enters 0, and display the average of all the numbers. 
*/
int main() {
    int val, count = 0;
    float average, sum = 0.0;
    printf("Enter the integer value: \n" );
    while(1) {
        scanf("%d", &val);
        if (val == 0) {
            break;
        }
        sum += val;
        count += 1;
    }
    average = sum / count;
    printf("Average of 10 numbers is: %f \n", average);
    return 0;
}
