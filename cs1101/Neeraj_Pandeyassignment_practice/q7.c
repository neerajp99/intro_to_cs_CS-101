#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

int main() {
    char val;
    int isLowercase;
    printf("Enter the character value: ");
    scanf("%c", &val); 

    // Edge case to check for non alphabets 
    if (!isalpha(val)) {
        printf("Not an alphabet \n");
        return 0;
    }

    val = tolower(val);
    isLowercase = (val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u');
    if (isLowercase) {
        printf("Character is a vowel \n");
    } else {
        printf("Character is a consonant \n");
    }
    return 0;
}