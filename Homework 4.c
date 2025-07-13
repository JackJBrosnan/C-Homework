#include <stdio.h>

int main(void) {
    int num;
    int prime=1;
    printf("Enter the final number: ");
    fflush(stdin);
    scanf("%d", &num);
    for(int i=2;i<=num;i++) {
        prime = 1;
        for(int j=2;j<=i;j++) {
            if(i%j==0 && i!=j) {
                prime=0;
            }
        }
        if(prime==1) {
            printf("%d\n",i);
        }
    }

    return 0;
}