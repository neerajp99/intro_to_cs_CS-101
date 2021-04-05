#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    /*
     * Using XOR operations on the two input values 
     * Opposite binary numbers gives 1, else 0
     *
    */
    int val1, val2;
    printf("Enter the first integer value: ");
    scanf("%d", &val1); 

    printf("Enter the second integer value: ");
    scanf("%d", &val2); 

    val1 = val1 ^ val2;
    val2 = val1 ^ val2;
    val1 = val1 ^ val2;

    printf("Value of first swapped integer %d \n", val1);
    printf("Value of second swapped integer %d \n", val2);
    return 0;
}
