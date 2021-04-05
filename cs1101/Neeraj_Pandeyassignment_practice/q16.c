#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
 * Write a program to generate all prime numbers between 1 and n (take n as input from the user).
 * Solution using Sieve of Eratosthenes.
 * Time Complexity: O(N log log(N))
*/
int main() {
    long long value;
    int x = 2;
    printf("Enter the value of N: ");
    scanf("%lld", &value);

    long long arr[value + 1];
    // Add the index values to the array 
    for(int i = 2; i <= value; i++) {
        arr[i] = i;
    }

    while (x * x <= value) {
        // If arr[i] is not changed
        if (arr[x] != 0) {
            // Update all the multiples of the arr[x] value
            for (int j = x ; j < value ; j++) {
                if (arr[x] * j > value) {
                    break;
                } else
                    // ), if not prime
                    arr[arr[x] * j] = 0;
                }
            }
            x += 1;
        }
    for (int  i = 2 ; i < value ; i++) {
        // Check if the value is 0 or not, if not 0 then prime
        if (arr[i] != 0) {
            printf("%lld \n", arr[i]);
        }
        
    }

    return 0;
}