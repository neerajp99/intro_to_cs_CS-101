#include <stdio.h>
// Does not return anything, updated the global output array
void combine_array(int arr1[], int arr2[], int output[], int i, int j, int x, int len_arr1, int len_arr2){
    // If we have elements to compare,
    // Check for smaller element and append it 
    if (i < len_arr1 && j < len_arr2 ) {
        // If first array element is smaller than the second one, append the first array element to the output array 
        if (arr1[i] < arr2[j]) {
            output[x] = arr1[i];
            i = i + 1;
        }
        // Else, append the second array's element to the output array  
        else {
            output[x] = arr2[j];
            j = j + 1;
        }
        // Increment the counter for the output array 
        x = x + 1;
        // Recursively calling the function, with the incremented counter values
        combine_array(arr1, arr2, output, i, j, x, len_arr1, len_arr2);
    } 
    // If one of the elements is exhausted,
    // Add the remaining to the end of the output array
    else {
        // Check for array 1, if not exhausted then append all the remaining values to the output array
        while (i < len_arr1) {
            output[x] = arr1[i];
            // Increment the counter values of i, x
            i = i + 1;
            x = x + 1;
        }
    
        // Check for array 2, if not exhausted then append all the remaining values to the output array
        while (j < len_arr2) {
            output[x] = arr2[j];
            // Increment the counter values of j, x
            j = j + 1;
            x = x + 1;
        }
    }
}
int main() {
    int output[1000];
    // Dummy values for array 1 and array 2
    int arr1[] = { 1 , 10, 188, 1910, 111110, 18111111};
	int arr2[] = { 10 , 16, 38 , 815 , 91916 };
    // Dynamically getting the size of the 2 lists 
    int len_arr1 = sizeof(arr1)/sizeof(int);
    int len_arr2 = sizeof(arr2)/sizeof(int);
    int i = 0;
    int j = 0;
    int x = 0; 
    combine_array(arr1, arr2, output, i, j, x, len_arr1, len_arr2);
    return 0;
}


