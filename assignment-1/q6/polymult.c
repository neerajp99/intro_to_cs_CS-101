#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n1; //Degree of the first polynomial + 1
    int n2; //Degree of the second polynomial + 1
    int n3; //Degree of product
    int i;
    scanf("%d", &n1);
    scanf("%d", &n2);
    int * a = malloc(n1*sizeof(int)); //First polynomial
    int * b = malloc(n2*sizeof(int)); //Second polynomial
    for(i=0; i<n1; i++){
	    scanf("%d", &a[i]);
    }
    for(i=0; i<n2; i++){
	    scanf("%d", &b[i]);
    }

    //Your code here
    //set n3 as the size of output array
    n3 = n1 + n2 - 1;
    //Output array should be c. Initialise as the following:
    int * c = malloc(n3*sizeof(int));

    for ( int j = 0 ; j < n1 ; j++) {
      for ( int k = 0 ; k < n2 ; k++) {
        c[ j + k ] = c [ j + k ] + (a[j] *b[k]);
      }
    }

    for(i=0; i<n3; i++){
    	printf("%d\n", c[i]);
    }
    return 0;
}
