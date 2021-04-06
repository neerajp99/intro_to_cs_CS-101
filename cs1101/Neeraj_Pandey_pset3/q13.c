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

/*
 * Method to initialise an empty stack
 */ 
void createEmptyStack(st *s) {
    s->top = -1;
}

/*
 * Method to check if the stack is empty or not
 */ 
int isEmpty(st *s) {
    if (s->top == -1){
        return 1;   
    } else {
        return 0;
    }
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

    while (1)
    {
        int choice;

        printf ("\n******************\n");
        printf ("MENU: \n");
        printf ("1. View the queue \n2. Add a new element to the queue \n3. Find element in the queue \n4. Dequeue from queue \n5.Exit \n");
        scanf  ("%d", &choice);
        printf ("\n******************\n");

        switch (choice)
        {
            case 1: 
                show (s);
                break;

            case 2: 
                add (s);
                break;

            case 3:
                find (s);
                break;

            case 4:
                deleteNode(s);
                break;

            case 5: printf ("Thank you. \n");
                return 0;

            default: printf ("Invalid input. \n");
                break;
        }
    }
    return 0; 
}