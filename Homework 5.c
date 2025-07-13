#include <stdio.h>
int wages=0;
int food=0;
int taxes=0;
int bills=0;
int extras=0;
int profit=0;
int entered=0;
int exiting=0;
char choice;
char calchoice;

void calc();
void enter();
void exit();

int main(void) {
    if(exiting==1) {
        return 0;
    }
    printf("\n[ENTER DETAILS (E)]\t[CALCULATE (C)]     [EXIT (X)]\n");
    fflush(stdin);
    scanf("%c",&choice);
    switch(toupper(choice)) {
        case 'E':
            if(entered==0){
                enter();
            }
            else {
                printf("Details already entered\n");
                main();
            }
        break;
        case 'C':
            if(entered==1) {
                calc();
            }
            else {
                printf("Enter details first\n");
                main();
            }
        break;
        case 'X':
            exiting=1;
            return 0;
        default:
            printf("Invalid choice\n");
            main();
    }
    return 0;
}


void enter() {
    printf("How much do you make each month?\n");
    fflush(stdin);
    scanf("%d",&wages);
    printf("How much do you spend on food each month?\n");
    fflush(stdin);
    scanf("%d",&food);
    printf("How much do you pay in taxes?\n");
    fflush(stdin);
    scanf("%d",&taxes);
    printf("How much do you pay for other bills?\n");
    fflush(stdin);
    scanf("%d",&bills);
    printf("How much do you pay other expenses?\n");
    fflush(stdin);
    scanf("%d",&extras);
    printf("\nFood: %d\n",food);
    printf("Taxes: %d\n",taxes);
    printf("Bills: %d\n",bills);
    printf("Other expenses: %d\n",extras);
    entered = 1;
    main();
}
void calc() {
    printf("Would you like to calculate for a day (D), week (W), or month (M)\n");
    fflush(stdin);
    scanf("%c",&calchoice);
    switch(toupper(calchoice)) {
        case 'D':
            profit= (wages-(food+taxes+bills))/28;
            printf("Daily loss/profit: %d\n",profit);
        break;
        case 'W':
            profit= (wages-(food+taxes+bills))/7;
            printf("Weekly loss/profit: %d\n",profit);
        break;
        case 'M':
            profit= wages-(food+taxes+bills);
            printf("Monthly loss/profit: £%d\n",profit);
        break;
        default:
            printf("Invalid choice\n");

    }
    main();

}