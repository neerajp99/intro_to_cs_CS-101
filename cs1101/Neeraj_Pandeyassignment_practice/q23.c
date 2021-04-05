#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100000
/*
 * Write a program to find the prime factors of a number entered by the user.
*/
int main() {
    int val, num = 2, arr[MAX], index = 0;
    printf("Enter the value of the first number: ");
    scanf("%d", &val);
    while (num * num <= val) {
        if (val % num) {
            num += 1;
        } else {
            val = val / num;
            arr[index] = num;
            index += 1;
        }
    }
    if (val > 1) {
        arr[index] = val;
    }
    // Print the factors
    for (int i = 0 ; i <= index ; i++) {
        printf("%d \n", arr[i]);
    }
    
    return 0;
}