// Implementation og Single linked list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Globally initialization of node structure
struct node {
  int data;
  struct node* link;
}
// Globally initializing root as NULL
struct node* root = NULL;

void append () {
  struct node* temp;
  temp = (struct node*)malloc(sizeof(struct node));
  printf("%s", "Enter Node data: ");
  scanf("%d", &temp -> data );

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
    printf("%s\n", "5. Delete node");
    printf("%s\n", "6. Quit");

    printf("%s", "Enter your choice: ");
    scanf("%d\n", &choice);

    swicth (choice) {
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
