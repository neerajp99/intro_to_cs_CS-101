#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
 * Use a switch-case construct to make a simple calculator that performs basic arithmetic computations
*/
int main() {
    char sign;
    long long val1, val2;
    printf("Enter the operation sign (+, -, /, *): ");
    scanf("%c", &sign);
    printf("Enter the value of the first number: ");
    scanf("%lld", &val1);
    printf("Enter the value of second number: ");
    scanf("%lld", &val2);

    switch(sign) {
        case '+':
            printf("%lld \n", val1 + val2);
            break;
        case '-':
            printf("%lld \n", val1 - val2);
            break;
        case '/':
            printf("%lld \n", val1 / val2);
            break;
        case '*':
            printf("%lld \n", val1 * val2 );
            break;
        default: 
            printf("Incorrect operator! \n");
            break;
    }
    return 0;
}
