#include <stdio.h>


int main(void) {
    char board[3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
    int won=0;
    int p1x=0;
    int p2x=0;
    int p1y=0;
    int p2y=0;
    int turns=0;
    while(won==0&&turns!=9) {
        printf("P1's turn\n");
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                printf("[%c]",board[i][j]);
            }
            printf("\n");
        }
        printf("Enter coordinate");
        scanf("%d %d",&p1x,&p1y);
        board[p1x][p1y]='X';
        for(int i=0;i<3;i++) {
            if(board[i][0]=='X'&&board[i][1]=='X'&&board[i][2]=='X') {
                printf("P1 Wins");
                won=1;
            }
            if(board[0][i]=='X'&&board[1][i]=='X'&&board[2][i]=='X') {
                printf("P1 Wins");
                won=1;
            }
            if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X') {
                printf("P1 Wins");
                won=1;
            }
            if(board[0][2]=='X'&&board[1][i]=='X'&&board[2][0]=='X') {
                printf("P1 Wins");
                won=1;
            }
        }
        if(won==1) {
            break;
        }
        printf("P2's turn\n");
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                printf("[%c]",board[i][j]);
            }
            printf("\n");
        }
        printf("Enter coordinate");
        scanf("%d %d",&p2x,&p2y);
        board[p2x][p2y]='o';
        for(int i=0;i<3;i++) {
            if(board[i][0]=='O'&&board[i][1]=='O'&&board[i][2]=='O') {
                printf("P2 Wins");
                won=1;
            }
            if(board[0][i]=='O'&&board[1][i]=='O'&&board[2][i]=='O') {
                printf("P2 Wins");
                won=1;
            }
            if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O') {
                printf("P2 Wins");
                won=1;
            }
            if(board[0][2]=='O'&&board[1][i]=='O'&&board[2][0]=='O') {
                printf("P2 Wins");
                won=1;
            }
        }
        if(won==1) {
            break;
        }
        turns=turns+1;
        if(turns==9) {
            printf("Tie");
        }
}

    return 0;
}