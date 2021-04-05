#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
 * Function that takes two values and swaps them
*/
void swap_numbers(int *swap1, int *swap2) {
    int temp;
    temp = *swap1; 
    *swap1 = *swap2; 
    *swap2 = temp;
}

int main() {
    /*
     * Takes two numbers from the user, swap them and return 
    */
    int val1, val2;
    printf("Enter the first integer value: ");
    scanf("%d", &val1); 

    printf("Enter the second integer value: ");
    scanf("%d", &val2); 

    // Call the swap_numbers function to swap the values using address values
    swap_numbers(&val1, &val2);
    printf("Swapped value of the first integer is: %d \n", val1);
    printf("Swapped value of the second integer is: %d \n", val2);
    return 0;
}
