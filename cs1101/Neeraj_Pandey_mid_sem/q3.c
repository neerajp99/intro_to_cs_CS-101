#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check_palindrome(char string[]) {
    int left = 0;
    int right = strlen(string) - 1;
    int flag = 1;

    while (right > 1) {
        if (string[left++] != string[right--]) {
            flag = 0;
        }
    }
    return flag;
}

int main() {
    int flag;
    char input[100];
    char str[] = "exit";
    int result;

    while (1) {
        printf("Enter the input string: ");
        scanf("%s", input);
        result = strcmp(input, str);
        if (result == 00 || result == 0) {
            printf("EXIT NOW!! \n");
            exit(1);
        }
        flag = check_palindrome(input);

        if (flag == 1) {
            printf("%d is palindrome \n", flag);
        } else if (flag == 0) {
            printf("%d not a palindrome \n", flag);
        }
    }
    return 0;
}
