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

    // Initialise sum variable 
    int sum = 0;

    // Iterate through the list and print the node data 
    while (node != NULL) {
        printf("%d -> ", node -> number);
        sum += node -> number;
        node = node -> next;
    }
    printf("NULL \n\n");
    printf("Sum of the list is: %d \n", sum);
} 

/*
 * Main function 
 */ 
int main(void) {
    FILE *file;
    file = fopen("integers.txt", "r");
    int arr[10];

    // Read from the file and add it the list 
    for (int i = 0 ; i < 10 ; i++) {
        fscanf(file, "%d", &arr[i]);
        add(arr[i]);
    }
    fclose(file);

    // Show the contents of the linked list and print the sum as well 
    show();

}