// Program for single linked list to append a node in C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct node {
  int data;
  int node* link;
}

// allocationg memmory to root before the first node
struct node* root = NULL; // iniitally the root has NULL value

void append () {
  struct node* temp; // initializing a temporary variable
  temp = (struct node*)malloc(sizeof(struct node)); //dynamically a memory will be allocated
  printf("Enter node data");
  scanf("%d", &temp -> data);
  temp -> link = NULL;

  if (root == NULL) {
    root = temp;
  } else {
    struct node* p;
    p = root;
    while (p -> link != NULL) {
      p = p -> link;
    }
  }

}



// append at the beginning
struct node {
  int data;
  int node* link;
}

// allocationg memmory to root before the first node
struct node* root = NULL; // iniitally the root has NULL value

void append () {
  struct node* temp; // initializing a temporary variable
  temp = (struct node*)malloc(sizeof(struct node)); //dynamically a memory will be allocated
  printf("Enter node data");
  scanf("%d", &temp -> data);
  temp -> link = NULL;

  if (root == NULL) {
    root = temp;
  } else {
      temp -> link = root; //right side connection
      root = temp; //left side conncection
    }
  }

}
