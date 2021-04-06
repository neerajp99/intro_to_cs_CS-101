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
 * Method to get the nth element from the end of the linked list
 */ 
int findNth(struct integers *head, int n) {
    // Initialize node to the head of the linked list 
    struct integers *node = head;
    struct integers *firstPointer = head;
    struct integers *secondPointer = head;
    int flag = n;
    int count = 0;

    // Iterate thorugh and get the count
    while (node != NULL) {
        count = count + 1;
        node = node -> next;
    }

    if (n <= 0 || n > count) {
        printf("Nth element out of range \n");
        return 0;
    } else {
        // Making the second pointer move n steps ahead of the first one 
        while (n > 0) {
            secondPointer = secondPointer -> next;
            n = n - 1;
        }

        // Stop when the second pointer reaches NULL and print the first pointer data
        while (firstPointer != NULL) {
            if (secondPointer == NULL) {
                printf("Element %d from the end of the linked list is: %d \n", flag, firstPointer -> number);
                return 1;
            }
            secondPointer = secondPointer -> next;
            firstPointer = firstPointer -> next;
        }
        return 0;
    }
}

/*
 * Main function 
 */ 
int main(void) {
    int val;

    // Add integer 1 to 10 to the first linked list 
    for (int i = 1 ; i <= 11 ; i++) {
        add(i, &head);
    }

    // Show the contents of the linked list and print the sum as well 
    printf("Initial linked list is: ");
    show(head);
    findNth(head, 10);
}