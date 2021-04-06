/*
 *  Take a string as input from the user. 
 *  Reverse the string using a stack. Check if the string is a palindrome.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int arr[1000];
int count = 0;

/*
 * Method Enqueue the queue
 */ 
void enqueue(void) {
    if (count > 1000) {
        printf("Sorry! Queue is full! \n");
    } else {
        printf ("Enter the integer to add: ");
        scanf  ("%d", &arr[count]);
        count += 1;
    }
}

/*
 * Method Dequeue the queue
 */ 
void dequeue(void) {
    if (count < 1) {
        printf("Queue is empty! \n");
    } else {
        for (int i = 0; i < count; i++) {
            arr[i] = arr[i + 1];
        }
        count -= 1;
        printf("Item has been removed! \n");
    }
}

/*
 * Method Show the queue elements
 */ 
void show(void) {
    if (count < 1) {
        printf("Queue is empty! \n");
    } else {
        printf("The Queue is: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", arr[i]);
        }
    }
}

/*
 * Main function 
 */ 
int main(void) {
    while (1)
    {
        int choice;

        printf ("\n******************\n");
        printf ("MENU: \n");
        printf ("1. View the queue \n2. Enqueue \n3. Dequeue  \n4.Exit \n");
        scanf  ("%d", &choice);
        printf ("\n******************\n");

        switch (choice)
        {
            case 1: 
                show();
                break;

            case 2: 
                enqueue();
                break;

            case 3:
                dequeue();
                break;

            case 4: printf ("Thank you. \n");
                return 0;

            default: printf ("Invalid input. \n");
                break;
        }
    }
    return 0; 
}