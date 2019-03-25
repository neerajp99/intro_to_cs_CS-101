#include <stdio.h>
#define MAX 1000000
int main() {

int x, arr[MAX];

printf("Enter the number of array: ");
scanf("%d", &x );

for (int i = 0 ; i < x ; i++) {
  printf("Enter the element %d%s ", i+1, ": ");
  scanf("%d", &arr[i] );
}
printf("you entered: " );
for (int j = 0 ; j < x ; j++) {
  printf("%d",arr[j]);

}
printf("\n" );



return 0;
}
