#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int f; //Mr Roy's choice
    int m; //Mrs Roy's choice
    int g; //Mrs Roy's mother's choice
    int d; //Daughter's choice
    printf("%s\n", "Enter Mr.Rao\'s choice");
    scanf("%d", &f);
    printf("%s\n", "Enter Mrs.Rao\'s choice");
    scanf("%d", &m);
    printf("%s\n", "Enter Mrs.Rao\'s mother\'s choice");
    scanf("%d", &g);
    printf("%s\n", "Enter Daughter\'s choice");
    scanf("%d", &d);
    // //Your code here
    int ctr = 0;
    if (f > 0 && m > 0 && f == m) {
      printf("\nvalues are %d and %d \n",f,m);
      ctr++;
    }
    if (f > 0 && m > 0 && d > 0 && f == m == d) {
      printf("\nValues are %d and %d and %d\n",f,m,d );
      ctr++;
    }
    if (m > 0 && d >0 && g > 0 && m == d == g) {
      printf("\nValues are %d and %d and %d\n",m,d,g );
      ctr++;
    }
    if (f > 0 && d > 0 && g > 0 && f == d == g) {
      printf("\nValues are %d and %d and %d\n",f,d,g );
      ctr++;
    }
    if (f > 0 && m > 0 && g > 0 && d > 0 && f == m == g == d) {
      printf("\nValues are %d and %d and %d and %d\n",f,m,g,d );
      ctr++;
    }
    else {
      if(ctr == 0) {
        printf("%c\n",'0' );
      }
    }

    return 0;
}
