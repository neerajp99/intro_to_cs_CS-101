#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
 * Write a program to find the size of the following data types: character, integer, double, and float.
*/
int main() {
    char charValue;
    int intValue;
    double doubleValue;
    float floatValue;

    // Calculate the size of each data type
    printf("Character data type size: %zu bytes \n", sizeof(charValue));
    printf("Integer data type size: %zu bytes \n", sizeof(intValue));
    printf("Double data type size: %zu bytes \n", sizeof(doubleValue));
    printf("Float data type size: %zu bytes \n", sizeof(floatValue));
    
    return 0;
}