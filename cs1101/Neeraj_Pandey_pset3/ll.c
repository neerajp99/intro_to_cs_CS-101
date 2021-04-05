#include <stdio.h>
#include <stdlib.h>

struct student {
    // some data
    int id;
    int batch;
    float gpa;

    // this is what we use to link our structures together
    struct student* next;
};

// globally initialize the head of the linked list
struct student* head = NULL;

// ////////////////////////
//       FUNCTIONS        /
///////////////////////////

/*
 * Goes through the entire linked list and prints every node
 */
void view (void)
{
    printf ("\nStudent List: \n\n");

    // initialize temp to head of linked list
    struct student* temp = head;

    // traverse till the end of the list
    while (temp != NULL) {

        // for each node, print out the details
        printf ("Student ID = %d \n", temp -> id);
        printf ("Batch = %d \n", temp -> batch);
        printf ("GPA = %f \n\n", temp -> gpa);

        // update the current node
        temp = temp -> next;
    }
}

/*
 *  Adds a new node to the end of the linked list
 */
void add (void) {

    // allocate new memory for the new node
    struct student* new = malloc (sizeof (struct student));

    // get user input
    printf ("Student ID: ");
    scanf  ("%d", &new->id);

    printf ("Batch: ");
    scanf  ("%d", &new->batch);

    printf ("GPA: ");
    scanf  ("%f", &new->gpa);

    // IMPORTANT to initialize the next pointer to NULL
    new -> next = NULL;

    // first check if the linked list is empty
    if (head == NULL) {
        head = new;
        printf ("First student has been added! \n");
        return;
    }

    // if not, traverse till the end of the linked list
    struct student* temp = head;

    // we just want to go to the end
    while (temp -> next != NULL) {
         temp = temp -> next;
    }

    // once we are at the end, we can simply attach the new node
    temp -> next = new;

    printf ("New student has been added! \n");
}

/*
 * Searches the linked list for a particular student by ID
 */
void find (void)
{
    int sID;

    // get user input
    printf ("Enter Student ID to be found: ");
    scanf  ("%d", &sID);

    // as usual, initialize our temp to the head
    struct student* temp = head;

    while (temp != NULL) {
        // if we find a student with same ID
        if (temp -> id == sID) {
            // print student details
            printf ("Student found! \n");
            printf ("Batch = %d \n", temp -> batch);
            printf ("GPA = %f \n", temp -> gpa);

            // and break out of the loop
            break;
        }

        temp = temp -> next;

    }

    // if we traversed the linked list and did not break,
    // then the student is not registered in our List
    printf ("Student not found. \n");

}

/*
 * Removes a particular student from the list by ID
 */
void delete (void) {

      int sID;

      // get user input
      printf ("Enter the ID of the student you wish to remove: ");
      scanf  ("%d", &sID);

      // TODO: check if this student exists, if yes, remove them from the list

      return;
}

// ////////////////////////
//      DRIVER CODE       /
///////////////////////////
int main (void)
{
    while (1)
    {
        int choice;

        printf ("\n******************\n");
        printf ("MENU: \n");
        printf ("1. View all students \n2. Add a student \n3. Find a student \n4. Remove a student \n5.Exit \n");
        scanf  ("%d", &choice);
        printf ("\n******************\n");

        switch (choice)
        {
            case 1: view ();
                    break;

            case 2: add ();
                    break;

            case 3:
                    find ();
                    break;

            case 4:
                     delete ();
                    break;

            case 5: printf ("Thank you. \n");
                    return 0;

            default: printf ("Invalid input. \n");
                     break;
        }

    }
}
