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
 * Method to traverse the list to search for a node 
 */ 
int search(int value) {
    struct integers *node = head;

    // Iterate through the list and check for the presence of value 
    while (node != NULL) {
        if (node -> number == value ) {
            return 1;
        }
        node = node -> next; 
    }
    return 0;
}

/*
 * Method to delete the node from a linked list 
 */ 
void deleteNode(int value) {
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
    int check;

    // Add integer 1 to 10 to the linked list 
    for (int i = 1 ; i <= 10 ; i++) {
        add(i);
    }

    // Show the contents of the linked list and print the sum as well 
    printf("Initial linked list is: ");
    show();

    printf("Enter the value: ");
    scanf("%d", &val);
    check = search(val);
    
    // Operations on check flag 
    switch (check) {
        case 1:
            deleteNode(val);
            break;
        case 0: 
            printf("Not in Linked List! \n");
            break;
        default:
            printf("Error! \n");
            break;
    }
    printf("\n Updated list: ");
    show(); 
}