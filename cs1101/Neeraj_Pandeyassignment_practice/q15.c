#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*
 * Write a program to check if a number is a prime number or not.
 * Time complexity: O(sqrt N)
*/
int main() {
    long long value;
    printf("Enter the value of N: ");
    scanf("%lld", &value);
    int x = 2;
    // Handling edge cases 
    if (value == 1) {
        printf("Not prime! \n");
        return 0;
    } 
    // Iterate from 1 - sqrt(value) => time complexity is O(sqrt(N))
    while (x * x <= value) {
        if (value % x == 0) {
            printf("Not prime! \n");
            return 0;
        }
        x += 1;
    }
    printf("PRIME! \n");
    return 0;
}
