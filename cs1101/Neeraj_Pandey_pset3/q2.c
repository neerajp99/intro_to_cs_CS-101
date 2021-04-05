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
void add(int value) {
    struct integers *new = malloc(sizeof (struct integers));
    // Create a new integers node
    new -> number = value;
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

    // Iterate through the list and print the node data 
    while (node != NULL) {
        printf("%d -> ", node -> number);
        node = node -> next;
    }
    printf("NULL \n\n");
} 

/*
 * Main function 
 */ 
int main(void) {
    int val;

    // Add integer 1 to 10 to the linked list 
    for (int i = 1 ; i <= 10 ; i++) {
        add(i);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &val);
    add(val);

    // Show the contents of the linked list and print the sum as well 
    show();

}