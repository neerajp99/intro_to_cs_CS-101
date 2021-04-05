#include <stdio.h>
int main() {
    int a = 1;
    while(a <= 20) {
        printf("%d\n", a+++2);
        a++;
    }
    return 0;
}

