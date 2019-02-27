#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n; //Number of tiles in the corridor
    int s; //start position
    int e; //end position (s < e)
    int i;
    printf("Enter the total number of tiles: ");
    scanf("%d",&n);
    printf("Enter the starting point: ");
    scanf("%d", &s);
    printf("Enter the end point: ");
    scanf("%d", &e);
    int *hall = malloc(n*sizeof(int)); //Array with quantities of litter
    for(i=0;i<n;i++){
        printf("Enter the trash: ");
        scanf("%d",&hall[i]);
    }

    //Your code here
    // int *newTrash = malloc(n*sizeof(int));
    if (s < e) {
      for (i = s-1 ; i < e; i++) {
        // newTrash[i] = hall[i];
        hall[i] = 0;
      }
    }
    else if (s > e) {
      for (i = s-1 ; i >= e-1; i--) {
        // newTrash[i] = hall[i];
        hall[i] = 0;
      }
    }
    else if (s > n || e > n) {
      printf("%s\n", "Please check the values, start point or end point can\'t be greater than the total umber of tiles");
    }
    //printf("%d\n", hall[3]);



    for(i=0;i<n;i++){
        printf("%d\n", hall[i]);
    }
    return 0;
}
