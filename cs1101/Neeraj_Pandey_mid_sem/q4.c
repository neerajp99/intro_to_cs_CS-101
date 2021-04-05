#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int distance, index, cost = 0;
    printf("Enter the distance: ");
    scanf("%d", &distance);

    // Conditional statements 
    // Handling edge cases
    if (distance < 0) {
        printf("ERROR \n");
        exit(1);
    }
    if (distance <= 50) {
        cost = distance * 300;
    } else if (distance > 50 && distance <= 100) {
        cost = 50 * 300 + (distance - 50) * 200; 
    } else if (distance > 100) {
        cost = 50 * 300 + 50 * 200 + (distance - 100) * 150;
    }

    // Print the distance 
    printf("Amount spend is: %d \n", cost);
    return 0;
}
