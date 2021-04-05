#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    int val1, val2, check;
    printf("Enter first integer value: ");
    scanf("%d", &val1);

    printf("Enter second integer value: ");
    scanf("%d", &val2);
    
    // This will return a bool value as 0 or 1
    check = val1 > val2;
    switch(check) { 
        case 0:
            printf("Maximum value is: %d \n", val2);
            break;
        case 1:
            printf("Maximum value is: %d \n", val1);
            break;
    }
    return 0;
}