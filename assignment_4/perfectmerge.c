#include <stdio.h>

#include <stdlib.h>

//typedef allows us to not say "struct" every time we declare a node
typedef struct node {
  int val;
  struct node * next;
}
Node;

int main() {
  Node * head = NULL;
  //To keep track of the current node
  Node * curr = NULL;
  int currval;
  // To store the number of nodes in the Linked List
  int nodes = 0;
  printf("Positive input for allocation of nodes and negative input integrers to terminate\n");
  scanf("%d", & currval);
  if (currval >= 0) {
    nodes++;
    head = malloc(sizeof(Node));
    if (head == NULL) {
      printf("ERROR: Could not allocate space for head!");
      return 1;
    }
    head -> val = currval;
    head -> next = NULL;
    curr = head;
    scanf("%d", & currval);
    while (currval >= 0) {
      nodes++;
      curr -> next = malloc(sizeof(Node));
      curr -> next -> val = currval;
      curr -> next -> next = NULL;
      curr = curr -> next;
      scanf("%d", & currval);
    }
  }
  if (nodes % 2 != 0) {
    printf("Odd number of nodes entered. Program will not execute further\n");
    exit(0);
  }
  // Stores the first half of the Linked list
  Node * first = NULL;
  // Stores address of Head node of First half
  Node * firstHead = NULL;
  // Stores the remaining half of the Linked list
  Node * second = NULL;
  // Stores address of Head node of Second half
  Node * secondHead = NULL;
  int mid = (int) nodes / 2;

  // Initializing the two halves of the linked list
  first = malloc(sizeof(Node));
  first -> val = -1;
  first -> next = NULL;
  firstHead = first;

  second = malloc(sizeof(Node));
  second -> val = -2;
  second -> next = NULL;
  secondHead = second;

  // Separating the two halves of the linked List
  curr = head;
  for (int i = 0; curr != NULL; i++) {
    if (i < mid) { // For the first half
      first -> val = curr -> val;
      if (curr -> next != NULL && i + 1 < mid) {
        first -> next = malloc(sizeof(Node));
        first = first -> next;
      } else
        first -> next = NULL;
    } else { // For the second half
      second -> val = curr -> val;
      second -> next = malloc(sizeof(Node));
      if (curr -> next != NULL) {
        second = second -> next;
      } else
        second -> next = NULL;
    }
    curr = curr -> next;
  }

  first = firstHead;
  second = secondHead;

  // Reversing the second linked List and storing the nodes in a new linked list
  Node * prev = NULL;
  for (; second != NULL; second = second -> next) {
    Node * temp = (Node * ) malloc(sizeof(Node));
    temp -> val = second -> val;
    temp -> next = prev;
    prev = temp;
  }

  // Overwriting the nodes of original linked list with the values of first half and reverse of second half
  curr = head;
  for (int i = 0; i < mid; i++) {
    // mid is the size of both halves
    curr -> val = first -> val;
    first = first -> next;
    curr = curr -> next;

    curr -> val = prev -> val;
    prev = prev -> next;
    curr = curr -> next;
  }

  curr = head;
  while (curr != NULL) {
    //Traverse the linked list
    printf("%d\n", curr -> val);
    curr = curr -> next;
  }
  return 0;
}
