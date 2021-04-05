#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    FILE *file;
    file = fopen("numbers.txt", "r");
    int arr[10];
    int index = 0;
    int upper = 10;
    int count = 0;
    int minimum, maximum, sminimum, smaximum;


    for (int i = 0 ; i < 10 ; i++) {
        fscanf(file, "%d,", &arr[i]);
    }
    fclose(file);

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

    // Remove the first largest number 
    for (int i = 0 ; i < 10 ; i++) {
        if (maximum == arr[i]) {
            count += 1;
            upper = upper - count;
            for (int j = i ; j < upper; j++) {
                arr[j] = arr[j+1];
            }
            count = 0;
        }
    // Remove the smallest number 
        if (minimum == arr[i]) {
            count += 1;
            upper = upper - count;
            for (int j = i ; j < upper; j++) {
                arr[j] = arr[j+1];
            }
            count = 0;
        }
    }

    // Again finding the maximum and minimum values 
    sminimum = smaximum = arr[0];
    // Minimum and maximum of array 
    for (int i = 0 ; i <= upper  ; i++) {
        if (sminimum > arr[i]) {
            sminimum = arr[i];
        }
        if (smaximum < arr[i]) {
            smaximum = arr[i];
        }
    }

    // Print the maximum and minimum of the values 
    printf("Second Maximum Value: %d \n", smaximum);
    printf("Second Minimum Value: %d \n", sminimum);

    return 0;
}
