// Header files
#include <stdio.h>

#include <stdlib.h>

// defining struct node in global mode
typedef struct node {
  int val;
  struct node * next;
}
Node;

// initializing the main function
int main() {
  //Head Node initialization
  Node * head = NULL;
  //To keep track of the curr node
  Node * curr = NULL;
  // To store the number of nodes
  int currentvalue;
  int nodes;
  printf("Positive input for allocation of nodes and negative input integrers to terminate\n");
  scanf("%d", & currentvalue);
  if (currentvalue >= 0) {
    nodes++;
    head = malloc(sizeof(Node));
    if (head == NULL) {
      printf("ERROR: Can't allocate space for Head!");
      return 1;
    }
    head -> val = currentvalue;
    head -> next = NULL;
    curr = head;
    scanf("%d", & currentvalue);
    while (currentvalue >= 0) {
      curr -> next = malloc(sizeof(Node));
      curr -> next -> val = currentvalue;
      curr -> next -> next = NULL;
      curr = curr -> next;
      nodes++;
      scanf("%d", & currentvalue);
    }
  }
  int nodecopy = nodes; // Making a copy of number of nodes

  // Taking fizz and buzz inputs from user
  int fizz;
  printf("Enter fizz: ");
  scanf("%d", & fizz);

  int buzz;
  printf("Enter buzz: ");
  scanf("%d", & buzz);

  // Reversing fizz nodes
  Node * currentHead = head;
  while (nodes > 0) {
    int count = 0;
    Node * prev = NULL;

    // Reverses every fizz number of nodes
    for (curr = currentHead; curr != NULL && count < fizz; curr = curr -> next) {
      Node * temp = (Node * ) malloc(sizeof(Node));
      temp -> val = curr -> val;
      temp -> next = prev;
      prev = temp;
      count++;
    }

    nodes -= count;

    // Stores the reversed nodes at their corresponding location in Linked List
    for (curr = currentHead; curr != NULL && count != 0; curr = curr -> next) {
      curr -> val = prev -> val;
      count--;
      prev = prev -> next;
    }
    currentHead = curr; // Here curr points at the node next to fizz-th node
  }

  curr = head;
  nodes = nodecopy;

  // Reversing buzz nodes
  currentHead = head;
  while (nodes > 0) {
    int count = 0;
    Node * prev = NULL;

    // Reverses every buzz number of nodes
    for (curr = currentHead; curr != NULL && count < buzz; curr = curr -> next) {
      Node * temp = (Node * ) malloc(sizeof(Node));
      temp -> val = curr -> val;
      temp -> next = prev;
      prev = temp;
      count++;
    }
    nodes -= count;

    // Stores the reversed nodes at their corresponding location in Linked List
    for (curr = currentHead; curr != NULL && count != 0; curr = curr -> next) {
      curr -> val = prev -> val;
      count--;
      prev = prev -> next;
    }
    currentHead = curr;
  }

  // Printing the output linked list
  curr = head;
  while (curr != NULL) { //Traverse the linked list
    printf("%d\n", curr -> val);
    curr = curr -> next;
  }
  return 0;
}
