#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
   
    int tabuleiro[10][10] = {0}; // 0 = água
    //codigo posicao do navio vertical
    //numero 3 = navio
    tabuleiro[6][4] = 3;
    tabuleiro[7][4] = 3;
    tabuleiro[8][4] = 3;

    //codigo do navio na horizontal
    tabuleiro[3][3] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[3][5] = 3;


    // cofigo para exibe tabuleiro
    printf("***TABULEIRO***\n");
    printf("   A B C D E F G H I J\n"); // Letras no topo


    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Números laterais (1–10)

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
