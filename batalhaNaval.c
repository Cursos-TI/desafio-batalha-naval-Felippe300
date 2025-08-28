#include <stdio.h>

int main() {
    // Nível Novato
    int tabuleiro[5][5];
    int i, j;

    // Inicializar tabuleiro com 0 (vazio)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionar navio vertical (ex: 3 posições)
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;
    tabuleiro[3][1] = 1;

    // Posicionar navio horizontal (ex: 2 posições)
    tabuleiro[4][3] = 1;
    tabuleiro[4][4] = 1;

    printf("Tabuleiro (Nivel Novato):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}
