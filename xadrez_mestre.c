#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}
void mover_rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        mover_rainha(casas - 1);
    }
}
int main() {
    printf("Movimento da Torre: \n");
    moverTorre(5);
    printf("\n");
    printf("Movimento do Bispo: \n");
    moverBispo(5);
    printf("\n");
    printf("Movimento da Rainha: \n");
    mover_rainha(8);
    printf("\n");

    printf("Movimento do Cavalo: \n");
    for (int linha = 0; linha <= 0; linha++) {
        for (int coluna = 0; coluna <= 1; coluna++) {
            printf("Cima\n", linha);
        }
        printf("Direita\n");
    }
    printf("Movimento do Bispo 2: \n");
    for (int linha = 0; linha <= 4; linha++) {
        for (int coluna = 0; coluna <= 2; coluna++) {
            printf("Cima\n", linha);
        }
        printf("Direita\n");
    }
}