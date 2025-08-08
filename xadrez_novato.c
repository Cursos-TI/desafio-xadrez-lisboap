#include <stdio.h>

int main() {
    int b = 0;
    int r = 0;
    //Mover a Torre 5 casas para direita
    for (int t = 0; t < 5; t++) {
        printf("Direita\n"); //Imprime a direção do movimento
    }while (b < 5) {
        printf("Cima, Direita\n"); //Imprime a direção do movimento
        b++;
    } do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    int movimentoCompleto = 1;

    while (movimentoCompleto--) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }

        return 0;
    }
