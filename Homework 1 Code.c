#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number: ");
    fflush(stdin);
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is even");
    }
    else {
        printf("The number is odd");
    }
    return 0;
}