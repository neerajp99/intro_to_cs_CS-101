#include <stdio.h>
#include <stdlib.h>

struct integers {
    int number;
    struct integers *next;
};
// Initialize the head of the linked lists as NULL
struct integers *head = NULL;

/*
 * Add method to append to the last of the linked list 
 */ 
void add() {
    struct integers *new = (struct integers*)malloc(sizeof (struct integers));
    // Create a new integers node

    printf ("Enter the integer to add: ");
    scanf  ("%d", &new->number);

    // new -> number = value;
    // pointer next is null 

    // Check if head is null, it's an empty list
    if (head == NULL) {
        head = new;
        head -> next = head;
        printf("First Value has been added! \n");
        return;
    }

    // Traverse the linked list, find the last node and append it  
    struct integers *last = head;

    // Loop until last node is NULL
    while (last -> next != head) {
        last = last -> next;
    }

    // After traversal, add the new node to the end of the list 
    last -> next = new;
    // printf("Value has been added! \n");
    new -> next = head;
}

/*
 * Traverse thorugh the list and print the nodes 
 */
void show(void) {
    // Initialize node to the head of the linked list 
    struct integers *node = head;
    printf ("\nList is: \n\n");

    // Iterate through the list and print the node data 
    while (node != NULL) {
        printf("%d -> ", node -> number);
        node = node -> next;

        if (node == head) {
            break;
        }
    }
    // node -> next gives the head
    // printf("%d \n", node -> number);
} 

/*
 * Traverse thorugh the list and find the node 
 */
void find(void) {
    int element;
    int flag = 0;
    // Get user input 
    printf ("Enter the integer to be found: ");
    scanf  ("%d", &element);

    // Initialize node to the head of the linked list 
    struct integers *node = head;

    while (node != NULL) {
        if (node -> number == element) {
            printf("Element found! \n");
            flag = 1;
        } 
        if (node -> next == head) {
            break;
        }
        printf("ho");
        node = node -> next;
    }
    if (flag == 0) {
        printf("Element not present in the list. \n");
    } 
}

/*
 * Method to delete the node from a linked list 
 */ 
void deleteNode(void) {
    int value;
    // Get user input 
    printf ("Enter the integer to delete: ");
    scanf  ("%d", &value);

    struct integers *prev;
    struct integers *curr = head;
    // Check if the node is the head node, simply forward the pointer 
    if (head -> number == value) {
        prev = prev;
        head = head -> next;
        printf("Node has been deleted! \n");
    } 
    // Else, remove the node by traversing and using two pointers, prev and curr
    else {
        // Iterate through the list to check for the node and delete it 
        while (curr != NULL) {
            if (curr -> next -> number == value) {
                prev = curr -> next;
                curr -> next = prev -> next;
                printf("Node has been deleted! \n");
                break;
            } else {
                curr = curr -> next;
            }
        }
    }
}

/*
 * Main function 
 */ 
int main(void) {
    int val;

    // Add integer 1 to 10 to the first linked list 
    // for (int i = 1 ; i <= 11 ; i++) {
    //     add(i);
    // }

    while (1)
    {
        int choice;

        printf ("\n******************\n");
        printf ("MENU: \n");
        printf ("1. View all elements \n2. Add a new element \n3. Find element in the list \n4. Remove an element \n5.Exit \n");
        scanf  ("%d", &choice);
        printf ("\n******************\n");

        switch (choice)
        {
            case 1: show ();
                break;

            case 2: add ();
                break;

            case 3:
                find ();
                break;

            case 4:
                deleteNode();
                break;

            case 5: printf ("Thank you. \n");
                return 0;

            default: printf ("Invalid input. \n");
                break;
        }
    }

    // Show the contents of the linked list and print the sum as well 
    // printf("Circular linked list is: ");
    // show();
}