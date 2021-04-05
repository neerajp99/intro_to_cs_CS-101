#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* 
 * Write a program that accepts 10 integers from a user and display the average of all numbers.
*/
int main() {
    int arr[10];
    float average, sum = 0.0;
    printf("Enter the 10 integer values: \n" );
    for(int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / 10;
    printf("Average of 10 numbers is: %f \n", average);
    return 0;
}
