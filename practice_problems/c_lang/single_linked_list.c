// Implementation og Single linked list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Globally initialization of node structure
struct node {
  int data;
  struct node* link;
};
// Globally initializing root as NULL
struct node* root = NULL;
// initializing the lenth variable as 0
int len = 0;

//Prototpe of all methods
void append(void);
void addToBeginning(void);
void addToAfter(void);
int checkLength(void);
void displayAll(void);
void delete(void);

void append () {
  struct node* temp;
  temp = (struct node*)malloc(sizeof(struct node));
  printf("%s", "Enter Node data: ");
  scanf("%d", &temp -> data );
  temp -> link = NULL;

  if (root == NULL) { //when root is NULL that means there is no node available
    root = temp;
  } else {
    struct node* local;
    local = root;
    // looping over the new local node and move forward
    while (local -> link != NULL) {
      local = local -> link;
    }
    local -> link = temp;
  }
}

int checkLength() {
  struct node* temp;
  int counter = 0;
  temp = root;

  while (temp != NULL) {
    counter++;
    temp = temp -> link;
  }

  printf("%d\n", counter);
  return 1;
}

void displayAll () {
  struct node* temp;
  temp = root;
  if (temp == NULL) {
    printf("%s\n", "List is empty");
  } else{
    while (temp != NULL) {
      printf("%d-->", temp -> data);
      temp = temp -> link;
    }
    printf("\n");
  }
}

void addToBeginning() {


}

void addToAfter() {


}

void delete() {
  struct node* temp;
  int location;
  printf("%s", "Enter location to delete: ");
  scanf("%d", &location);

  if (location > sizeof(struct node*)) {
    printf("%s\n", "Invalid Location");
  }
  else if (location == 1) {
    temp = root;
    root = temp -> link;
    temp -> link = NULL;
    free(temp);
  }
  else {
    struct node* p = root;
    struct node* q = root;
    int i = 1;
    while (i < location - 1) {
      p = p -> link;
      i++;
    }
    q = q -> link;
    p -> link = q -> link;
    q -> link = NULL;
    free(q);
  }

}



int main () {
  int choice;
  while (1) {
    printf("%s\n", "Single Linked list: ");
    printf("%s\n", "1. Append node to the end  " );
    printf("%s\n", "2. Append node to the beginning");
    printf("%s\n", "3. Add node after ");
    printf("%s\n", "4. Length of the linked list");
    printf("%s\n", "5. Display all the elements");
    printf("%s\n", "6. Delete node");
    printf("%s\n", "7. Quit");

    printf("%s", "Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        append();
        break;
      case 2:
        addToBeginning();
        break;
      case 3:
        addToAfter();
        break;
      case 4:
        checkLength();
        break;
      case 5:
        displayAll();
        break;
      case 6:
        delete();
        break;
      case 7:
        exit(1);
      default:
        printf("%s\n", "Invalid choice");
    }
  }
  return 0;
}

/*
 * C Program to Implement a Stack using Linked List
 */
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;

int topelement();
void push(int data);
void pop();
void empty();
void display();
void destroy();
void stack_count();
void create();

int count = 0;

void main()
{
    int no, ch, e;

    printf("\n 1 - Push");
    printf("\n 2 - Pop");
    printf("\n 3 - Top");
    printf("\n 4 - Empty");
    printf("\n 5 - Exit");
    printf("\n 6 - Dipslay");
    printf("\n 7 - Stack Count");
    printf("\n 8 - Destroy stack");

    create();

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (top == NULL)
                printf("No elements in stack");
            else
            {
                e = topelement();
                printf("\n Top element : %d", e);
            }
            break;
        case 4:
            empty();
            break;
        case 5:
            exit(0);
        case 6:
            display();
            break;
        case 7:
            stack_count();
            break;
        case 8:
            destroy();
            break;
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}

/* Create empty stack */
void create()
{
    top = NULL;
}

/* Count stack elements */
void stack_count()
{
    printf("\n No. of elements in stack : %d", count);
}

/* Push data into stack */
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

/* Display stack elements */
void display()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 }

/* Pop Operation on stack */
void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\n Popped value : %d", top->info);
    free(top);
    top = top1;
    count--;
}

/* Return top element */
int topelement()
{
    return(top->info);
}

/* Check if stack is empty or not */
void empty()
{
    if (top == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}

/* Destroy entire stack */
void destroy()
{
    top1 = top;

    while (top1 != NULL)
    {
        top1 = top->ptr;
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;

    printf("\n All stack elements destroyed");
    count = 0;
}
