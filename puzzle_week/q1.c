#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
  char y[100], z[100], n[100];

  for (int i = 1 ; i <= 1000 ; i++) {
    if (i % 5 == 0 && i % 9 == 0 ) {
       sprintf(n, "%d!?", i);
       printf("%s\n", n);

     }
    else if (i % 5 == 0) {
      sprintf(y, "%d!", i);
      printf("%s\n", y);
    }
    else if (i % 9 == 0) {
      sprintf(z, "%d?", i);
      printf("%s\n", z);

    }

    else {
      printf("%d\n", i);
    }
  }
  return  0;
}
