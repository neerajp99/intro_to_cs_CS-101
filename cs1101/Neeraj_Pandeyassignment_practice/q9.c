#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 3

int main() {
    int val1, val2, val3, arr[MAX], index=0, temp;
    printf("Enter the first integer value: ");
    scanf("%d", &val1); 
    arr[index] = val1;
    index += 1;

    printf("Enter the third integer value: ");
    scanf("%d", &val2); 
    arr[index] = val2;
    index += 1;

    printf("Enter the third integer value: ");
    scanf("%d", &val3); 
    arr[index] = val3;

    // Sort the values in ascending order (using bubble sort)
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Show the values in ascending order
    for(int i=0 ; i<3 ; i++) {
			printf("Value %d: %d\n", i + 1, arr[i]);
	}

    return 0;
}
