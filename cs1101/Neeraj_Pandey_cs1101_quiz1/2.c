#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    int val, index = 1;
    long long int factorial = 1;
    printf("Enter the value of number: ");
    scanf("%d", &val);

    // Handling edge cases 
    if (val < 0) {
        printf("N is smaller than 0. Please enter a positive number.");
        return 0;
    }
    for (int i = 1 ; i <= val ; i++) {
        if (i % 2 != 0) {
            factorial = factorial * i;
        }
        
    }
    printf("Factorial value: %lli \n", factorial);
    return 0;
}
