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
 * Method to delete node at a key position
 */ 
void deleteNodeAtPosition(int key) {
    struct integers *prev;
    struct integers *curr = head;
    int counter = 2;
    // Check if the node is the head node, simply forward the pointer 
    if (key == 1) {
        prev = prev;
        head = head -> next;
        printf("Node has been deleted! \n");
    } else {
        // Iterate through the list to check for the key and delete at the key 
        while (curr != NULL) {
            if (counter == key) {
                prev = curr -> next;
                curr -> next = prev -> next;
                printf("Node has been deleted! \n");
                break;
            } else {
                curr = curr -> next;
                counter = counter + 1;
            }
        }
    }
}

/*
 * Main function 
 */ 
int main(void) {
    int val;
    int check;

    // Add integer 1 to 10 to the linked list  (dummy 10 integer list)
    for (int i = 1 ; i <= 10 ; i++) {
        add(i);
    }

    // Show the contents of the linked list and print the sum as well 
    printf("Initial linked list is: ");
    show();

    // Inout the position key from the user
    printf("Enter the position: ");
    scanf("%d", &val);

    // Delete node at a specific position
    if (val > 0 && val < 11) {
        deleteNodeAtPosition(val);
        // Show the updated linked list 
        printf("\n Updated list: ");
        show();
    } else {
        printf("ERROR!!!  Position out of range! \n");
    }
}