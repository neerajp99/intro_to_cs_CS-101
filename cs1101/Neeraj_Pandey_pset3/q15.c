#include <stdio.h>
#include <stdlib.h>

struct integers {
    int number;
    struct integers *next;
};

struct integers *head3 = NULL;
struct integers *newHead = NULL;

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
 * Method to delete duplicates from a sorted linked list 
 * Using two pointer
 */ 
void deleteDuplicates(struct integers *head) {
    struct integers *curr = head;
    struct integers *next;
    int count = 1;

    while (curr -> next != NULL) {
        if (curr -> number == curr -> next -> number) {
            next = curr -> next -> next;
            curr -> next = next;
        } else {
            curr = curr -> next;
        }
    }
}

/*
 * Main function 
 */ 
int main(void) {
    int val;
    // Initialize the head of the linked lists as NULL
    struct integers *l1Head = NULL;

    // Add integer 1 to 10 to the first linked list 
    for (int i = 1 ; i <= 20 ; i = i + 2) {
        add(i, &l1Head);
        add(i, &l1Head);
    }

    // Show the contents of the linked list and print the sum as well 
    printf("Initial FIRST linked list is: ");
    show(l1Head);

    deleteDuplicates(l1Head);
    printf("After removing duplicates: ");
    show(l1Head);
}