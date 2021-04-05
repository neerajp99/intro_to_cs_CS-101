#include <stdio.h>
int main() {
    int v, ix = 1, fact = 1;
    printf("Integer value: ");
    scanf("%d", &v);

    if (v < 0) {
        printf("number is smaller than zero");
        return 0;
    }
    while (index <= v) {
        fact = fact * ix;
        ix += 1;
    }
    printf("Odd Factorial is: %d \n", fact);
    return 0;
}
