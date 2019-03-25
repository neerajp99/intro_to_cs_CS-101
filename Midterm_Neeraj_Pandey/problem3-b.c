#include <stdio.h>
#define MAX 10000
int main () {
  int arr[MAX], x, temp, k;
  printf("Enter the number of array: ");
  scanf("%d", &x );

  for (int i = 0 ; i < x ; i++) {
    printf("Enter the element %d%s ", i+1, ": ");
    scanf("%d", &arr[i] );
  }

  for (int j = 0 ; j < x ; j++) {
    temp = arr[j];
    k = j-1;

    while (temp > arr[k] && k >= 0) {
      arr[k + 1] = arr[k];
      --k;
    }
    arr[k+1]= temp;
  }
  printf("%s\n", "Sorted Array in Descending order: ");
  for (int m = 0 ; m < x ; m++) {
    printf("%d%s",arr[m], " ");

  }
  printf("\n" );



  return 0;
}
