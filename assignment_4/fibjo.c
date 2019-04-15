// The following program takes user input in the form of a

#include <stdio.h>

#include <stdlib.h>

// defining struct node in global mode
typedef struct node {
  int val;
  struct node * next;
}
Node;

// function to delete nodes
void del(Node * prev) {
  Node * temp = prev -> next;
  prev -> next = prev -> next -> next;
  free(temp);
}

// Initializing the main function
int main() {
  Node * head = NULL;
  //To keep track of the current node
  Node * curr = NULL;
  int currentValue;
  // Stores user Input
  int n;
  printf("Enter n: ");
  scanf("%d", & n);
  // To keep track of number of nodes
  int nodes = 0;
  printf("Positive input for allocation of nodes and negative input integrers to terminate\n");
  scanf("%d", & currentValue);
  if (currentValue >= 0) {
    head = malloc(sizeof(Node));
    if (head == NULL) {
      printf("ERROR: Could not allocate space for head!");
      return 1;
    }
    nodes = 1;
    head -> val = currentValue;
    head -> next = NULL;
    curr = head;
    scanf("%d", & currentValue);
    while (currentValue >= 0) {
      curr -> next = malloc(sizeof(Node));
      curr -> next -> val = currentValue;
      curr -> next -> next = NULL;
      curr = curr -> next;
      nodes++;
      scanf("%d", & currentValue);
    }
  }
  // For a circular linked list
  curr -> next = head;

  // Creating an array for Fibonacci series
  int Fibo[n];
  Fibo[0] = 0;
  Fibo[1] = 1;
  for (int i = 2; i < n; i++) {
    int a = Fibo[i - 1];
    int b = Fibo[i - 2];
    int c = a + b;
    Fibo[i] = c;
  }

  // Node deletion happens here
  for (int i = 0; i < n; i++) {
    // If number of nodes is less than the element to be deleted, loop breaks
    if (nodes < Fibo[i] + 1)
      break;
    // Number of shifts from the current node
    int shift = (Fibo[i] - 1) % nodes;
    for (int i = 1; i <= shift; i++) {
      curr = curr -> next;
    }
    // Now curr is at the node before the node to be deleted
    del(curr);
    nodes--;
    if (i == n - 1) {
      // Restarting the loop in case it reaches the end
      i = 0;
      continue;
    }
    curr = curr -> next;
  }

  while (nodes != 0) {
    //Traverse the linked list
    printf("%d\n", curr -> val);
    curr = curr -> next;
    nodes--;
  }
  return 0;
}
