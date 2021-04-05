#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    int arr[10], array_length;
    printf("Enter the 10 integer values: \n" );
    for(int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }
    // Get the length of the array 
    array_length = sizeof(arr)/sizeof(int);
    // Print the first - last and vice versa
    for (int i = 0 ; i < array_length / 2 ; i++) {
        printf("%d \n", arr[i]);
        printf("%d \n", arr[array_length - 1 - i]);
    }
    return 0;
}
