/*
 *  Take a string as input from the user. 
 *  Reverse the string using a stack. Check if the string is a palindrome.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct stack {
    char values[100];
    int top;
};
typedef struct stack st;
int count = 0;

void createEmptyStack(st *s) {
    s->top = -1;
}

/*
 * Method that takes the character string, and checks if it's a palindrome or not
 */ 
int checkPalindrome(char value[]) {
    int check;
    check = ceil(count/2.0);
    int flag = 0;
    for (int i = 0; i < check ; i++) {
        if (value[i] != value[count - 1]){
            flag = 1;
            return flag;
        }
        count -= 1;
    }
    return flag;
}

/*
 * Method that takes the character string, add it to an array, and return the reversed string
 */ 
int reverseString(char value[], st *s) {
    char list[100] = "";
    for (int i = 0; i < strlen(value); i++){
        printf("%c \n", value[i]);
        s -> top++;
        s -> values[s -> top] = value[i];
        count += 1;
    }
    for (int i = 0; i < count; i++) {
        char ch = s->values[s->top];
        s->top--;
        strncat(list, &ch, 1);
    }
    // printf("Reversed string is: %s \n", list);
    int check = checkPalindrome(list);
    return check;
}

/*
 * Main function 
 */ 
int main(void) {
    char value[100];
    printf("Enter the input string: ");
    scanf("%s", value);
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);
    int check = reverseString(value, s);
    if (check == 1) {
        printf("Not a palindrome! \n");
    } else {
        printf("Yes, string is a palindrome! \n");
    }
    return 0; 
}