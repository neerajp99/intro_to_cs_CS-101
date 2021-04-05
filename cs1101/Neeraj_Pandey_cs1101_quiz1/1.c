#include <stdio.h>
int main() {
    int value;
    printf("Value: ");
    scanf("%d", &value); 

    if (value % 2 == 0) {
        printf("Even \n");
    } 
    else if (value % 2 != 0 && value % 3 == 0 ) {
        printf("foo \n");
    }
    else if (value % 2 != 0 && value % 5 == 0) {
        printf("bar \n");
    }
    else if (value % 2 != 0 && value % 3 == 0 && value % 5 == 0) {
        printf("foobar \n");
    } else {
        printf("odd \n");
    }
    return 0;
}
