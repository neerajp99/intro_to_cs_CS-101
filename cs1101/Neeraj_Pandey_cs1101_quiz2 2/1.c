#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/* 
 * Write a program that asks the user for 10 integers, and write them into an array. 
 * Find and print the maximum and minimum of the numbers in the array. 
 * If the maximum and minimum numbers are equal, print “Equal”, 
 * otherwise print the difference between the maximum and the minimum numbers.
*/
int main() {
    int arr[10], minimum, maximum, difference;
    printf("Enter the 10 integer values: \n" );
    for(int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }
    minimum = maximum = arr[0];
    // Minimum and maximum of array 
    for (int i = 0 ; i < 10 ; i++) {
        if (minimum > arr[i]) {
            minimum = arr[i];
        }
        if (maximum < arr[i]) {
            maximum = arr[i];
        }
    }

    // Print the maximum and minimum of the values 
    printf("Maximum Value: %d \n", maximum);
    printf("Minimum Value: %d \n", minimum);

    // Check for equal max and min 
    if (maximum == minimum) {
        printf("Equal \n");
    } else {
        difference = maximum - minimum;
        printf("Difference:  %d \n", difference);
    }

    return 0;
}
