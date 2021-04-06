#include <stdio.h>
#include <stdlib.h>

struct integers {
    int number;
    struct integers *next;
};

// Initialize the head of the linked list as NULL
struct integers *head = NULL;

/*
 * Add method to append to the last of the linked list 
 */ 
void add(void) {
    struct integers *new = malloc(sizeof (struct integers));
    printf ("Enter the integer to add: ");
    scanf  ("%d", &new->number);
    // Create a new integers node
    // new -> number = value;
    // pointer next is null 
    new -> next = NULL;

    // Check if head is null, it's an empty list
    if (head == NULL) {
        head = new;
        // printf("First Value has been added! \n");
        return;
    }

    // Traverse the linked list, find the last node and append it  
    struct integers* last = head;

    // Loop until last node is NULL
    while (last -> next != NULL) {
        last = last -> next;
    }

    // After traversal, add the new node to the end of the list 
    last -> next = new;
    // printf("Value has been added! \n");
}

/*
 * Traverse thorugh the list and print the nodes 
 */
void show(void) {
    // Initialize node to the head of the linked list 
    struct integers *node = head;

    printf("The Queue is: ");
    // Iterate through the list and print the node data 
    while (node != NULL) {
        printf("%d -> ", node -> number);
        node = node -> next;
    }
} 

/*
 * Method to delete the node from a linked list 
 */ 
void deleteNode(void) {
    struct integers *prev;
    struct integers *curr = head;
    // Check if the node is the head node, simply forward the pointer 
    prev = prev;
    head = head -> next;
    printf("Node has been deleted! \n");
    // Else, remove the node by traversing and using two pointers, prev and curr
}


/*
 * Main function 
 */ 
int main(void) {
    int val;

    // Add integer 1 to 10 to the linked list 
    // for (int i = 1 ; i <= 10 ; i++) {
    //     add(i);
    // }

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
                add();
                break;

            case 3:
                deleteNode();
                break;

            case 4: printf ("Thank you. \n");
                return 0;

            default: printf ("Invalid input. \n");
                break;
        }
    }
}