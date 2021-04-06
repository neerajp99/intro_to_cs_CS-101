#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct stack {
    int values[100];
    int top;
};
typedef struct stack st;
int count = 0;

/*
 * Initialise empty stack
 */ 
void createEmptyStack(st *s) {
    s->top = -1;
}

/*
 * Check the size of the stack
 */ 
int checkSize(st *s) {
    if (s -> top == 99) {
        return 1;
    } else {
        return 0;
    }
}

/*
 * Append element to stack
 */ 
void addToStack(st *s, int value) {
    // Check if the stack is already full 
    if (checkSize(s)) {
        printf("Stack is full! \n");
    } else {
        s -> top++;
        s -> values[s -> top] = value;
    }
    count += 1;
}

/*
 * Print all elements in a stack
 */ 
void show(st *s) {
    printf("Stack is: ");
    for (int i = 0 ; i < count ; i++ ) {
        printf("%d ", s -> values[i]);
    }
    printf("\n");
}

/*
 * Pop from the stack
 */ 
void removeTop(st *s) {
    s -> top--;
    count--;
}

/*
 * Remove duplicates from stack using brute force
 */ 
void removeDuplicates(st *s) {
    for (int i = 0 ; i < count ; i++ ){
        for (int j = i + 1 ; j < count ; j++) {
            if (s -> values[i] == s -> values[j]) {
                int c = j;
                while (c < count ) {
                    s -> values[c] = s -> values[c + 1];
                    c = c + 1;
                }
                removeTop(s);
            }
        }
    }
}

/*
 * Main function 
 */ 
int main(void) {
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);
    addToStack(s, 1);
    addToStack(s, 2);
    addToStack(s, 3);
    addToStack(s, 1);
    addToStack(s, 2);
    addToStack(s, 4);
    removeDuplicates(s);
    show(s);
    return 0; 
}