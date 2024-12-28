#include <stdio.h>

int main() {
    printf("Welcome to the Tic-Tac-Toe game, made by Calaffe\n");
    printf("Player 1 plays with: 1\nPlayer 2 plays with: 2\n");
    printf("Gut game! \n");
    int cpt = 0;
    int oneORtwo, row, column;
    int tableau[3][3];
    tableau[0][0] = 0;
    tableau[0][1] = 0;
    tableau[0][2] = 0;
    tableau[1][0] = 0;
    tableau[1][1] = 0;
    tableau[1][2] = 0;
    tableau[2][0] = 0;
    tableau[2][1] = 0;
    tableau[2][2] = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", tableau[i][j]);
        }
        printf("\n");
    }
    do {
        printf("Enter the row ");
        scanf("%d", &row);
        printf("Enter the column ");
        scanf("%d", &column);
        printf("Enter the value (1/2) ");
        scanf("%d", &oneORtwo);   
        tableau[row][column] = oneORtwo;
   
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", tableau[i][j]);
            }
            printf("\n");
        }
        // Player 1 Wins -- Rows
        if (tableau[0][0] == 1 && tableau[0][1] == 1 && tableau[0][2] == 1) {
            printf("Player 1 wins! GG\n");
            break;
        }
        if (tableau[1][0] == 1 && tableau[1][1] == 1 && tableau[1][2] == 1) {
            printf("Player 1 wins! GG\n");
            break;
        }
        if (tableau[2][0] == 1 && tableau[2][1] == 1 && tableau[2][2] == 1) {
            printf("Player 1 wins! GG\n");
            break;
        }
        // Player 2 Wins -- Rows
        if (tableau[0][0] == 2 && tableau[0][1] == 2 && tableau[0][2] == 2) {
            printf("Player 2 wins! GG\n");
            break;
        }
        if (tableau[1][0] == 2 && tableau[1][1] == 2 && tableau[1][2] == 2) {
            printf("Player 2 wins! GG\n");
            break;
        }
        if (tableau[2][0] == 2 && tableau[2][1] == 2 && tableau[2][2] == 2) {
            printf("Player 2 wins! GG\n");
            break;
        }
        // Player 1 Wins -- Diagonals
        if (tableau[0][0] == 1 && tableau[1][1] == 1 && tableau[2][2] == 1) {
            printf("Player 1 wins! GG\n");
            break;
        }
        if (tableau[0][2] == 1 && tableau[1][1] == 1 && tableau[2][0] == 1) {
            printf("Player 1 wins! GG\n");
            break;
        }
        // Player 2 Wins -- Diagonals
        if (tableau[0][0] == 2 && tableau[1][1] == 2 && tableau[2][2] == 2) {
            printf("Player 2 wins! GG\n");
            break;
        }
        if (tableau[0][2] == 2 && tableau[1][1] == 2 && tableau[2][0] == 2) {
            printf("Player 2 wins! GG\n");
            break;
        }
        // Player 1 Wins -- Columns
        if (tableau[0][0] == 1 && tableau[1][0] == 1 && tableau[2][0] == 1) {
            printf("Player 1 wins! GG\n");
            break;
        }
        if (tableau[0][1] == 1 && tableau[1][1] == 1 && tableau[2][1] == 1) {
            printf("Player 1 wins! GG\n");
            break;
        }
        if (tableau[0][2] == 1 && tableau[1][2] == 1 && tableau[2][2] == 1) {
            printf("Player 1 wins! GG\n");
            break;
        }
        // Player 2 Wins -- Columns
        if (tableau[0][0] == 2 && tableau[1][0] == 2 && tableau[2][0] == 2) {
            printf("Player 2 wins! GG\n");
            break;
        }
        if (tableau[0][1] == 2 && tableau[1][1] == 2 && tableau[2][1] == 2) {
            printf("Player 2 wins! GG\n");
            break;
        }
        if (tableau[0][2] == 2 && tableau[1][2] == 2 && tableau[2][2] == 2) {
            printf("Player 2 wins! GG\n");
            break;
        }
        cpt++;
    } while (cpt < 9);
    
    return 0;
}
