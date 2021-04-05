#include <stdio.h>
#include <stdlib.h>

struct integers {
    int number;
    struct integers *next;
};

/*
 * Add method to append to the last of the linked list 
 */ 
void add(int value, struct integers** head) {
    struct integers *new = (struct integers*)malloc(sizeof (struct integers));
    // Create a new integers node
    new -> number = value;
    // pointer next is null 
    new -> next = NULL;

    // Check if head is null, it's an empty list
    if (*head == NULL) {
        *head = new;
        // printf("First Value has been added! \n");
        return;
    }

    // Traverse the linked list, find the last node and append it  
    struct integers* last = *head;

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
void show(struct integers *head) {
    // Initialize node to the head of the linked list 
    struct integers *node = head;

    // Iterate through the list and print the node data 
    while (node != NULL) {
        printf("%d -> ", node -> number);
        node = node -> next;
    }
    printf("NULL \n\n");
} 

/*
 * Method to merge one linked list into other 
 */
void merge(struct integers *head1, struct integers *head2) {
    struct integers *node = head1;
    struct integers *node1 = head2;
    // Traverse to the end of the first list 
    while (node != NULL) {
        if (node -> next == NULL) {
            node -> next = node1;
            break;
        }
        node = node -> next;
    }
}

/*
 * Main function 
 */ 
int main(void) {
    int val;
    // Initialize the head of the linked lists as NULL
    struct integers *l1Head = NULL;
    struct integers *l2Head = NULL;

    // Add integer 1 to 10 to the first linked list 
    for (int i = 1 ; i <= 10 ; i++) {
        add(i, &l1Head);
    }

    // Add integer 11 to 20 to the second linked list 
    for (int i = 11 ; i <= 20 ; i++) {
        add(i, &l2Head);
    }

    // Show the contents of the linked list and print the sum as well 
    printf("Initial FIRST linked list is: ");
    show(l1Head);
    printf("Initial SECOND linked list is: ");
    show(l2Head);

    // Merge the two created li
    merge(l1Head, l2Head);
    printf("Linked list after appending: ");
    show(l1Head);
}