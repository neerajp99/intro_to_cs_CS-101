#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <math.h>
/*
 * Write a program to generate the first n prime numbers (take n as input from the user).
*/
int main() {
    long long value;
    printf("Enter the value of N: ");
    scanf("%lld", &value);
    // Approximate upper limit using Rosser's Theorem
    long long upper = (value + 1) * log(value + 1) + (value + 1) * log(log(value + 1));
    // Running the Sieve of Eratosthenes algorithm normally 
    long long arr[upper + 1];
    int count = 0, x = 2;
    // Add the index values to the array 
    for(int i = 2; i <= upper; i++) {
        arr[i] = i;
    }

    while (x * x <= upper || count == value) {
        // If arr[i] is not changed
        if (arr[x] != 0) {
            // Update all the multiples of the arr[x] value
            for (int j = x ; j < upper ; j++) {
                if (arr[x] * j > upper) {
                    break;
                } else
                    // ), if not prime
                    arr[arr[x] * j] = 0;
                }
            }
            x += 1;
            count += 1;
    }
    int ctr = 0;
    for (int  i = 2 ; i < upper ; i++) {
        // Check if the value is 0 or not, if not 0 then prime
        if (arr[i] != 0 && ctr < value) {
            printf("%lld \n", arr[i]);
            ctr += 1;
        }
    }
    return 0;
}