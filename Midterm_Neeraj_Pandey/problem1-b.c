#include <stdio.h>

int main () {
  int first_term = 0, second_term = 1, next_term, i = 50;
  printf("%d\n", first_term);
  // printf("%d\n", second_term );

  while (i > 2) {
    next_term = first_term + second_term;
    first_term = second_term;
    second_term = next_term;
    if (i % 2 == 0){
      printf("%d\n",  next_term );
    }
    i--;
  }
  return 0;
}
