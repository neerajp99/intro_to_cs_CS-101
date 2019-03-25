#include <stdio.h>
#define MAX 1000
int binarySearch (int arr[], int l, int r, int x) {
  while (l <= r){
    int m = l + (r-1)/2;

    if (arr[m] == x){
      return m;
    }
    if(arr[m] < x) {
      l = m + 1;
    }
    else {
      r = m-1;
    }
  }

  return -1;
}

int main() {
  int arr[MAX], x, k;
  printf("Enter the number of array: ");
  scanf("%d", &x );

  for (int i = 0 ; i < x ; i++) {
    printf("Enter the element %d%s ", i+1, ": ");
    scanf("%d", &arr[i] );
  }
  printf("Enter the number to check in the array: ");
  scanf("%d", &k );

  int finalResult = binarySearch(arr, 0, x-1, k);

  (finalResult == -1) ? printf("%s\n", "Not Found") : printf("%s\n", "Found");

return 0;

}
