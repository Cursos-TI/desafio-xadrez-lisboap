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
    int linha, coluna;

    // Posição atual do cavalo
    printf("Digite a linha do cavalo (0 a 7): ");
    scanf("%d", &linha);

    printf("Digite a coluna do cavalo (0 a 7): ");
    scanf("%d", &coluna);

    printf("Movimentos possíveis do cavalo a partir de (%d, %d):\n", linha, coluna);

    // Loop aninhado para testar deslocamentos
    for (int i = -2; i <= 2; i++) {
        for (int j = -2; j <= 2; j++) {
            // Ignora movimentos que não formam um L
            if ((i * i + j * j) == 5) {
                int novaLinha = linha + i;
                int novaColuna = coluna + j;

                // Verifica se está dentro do tabuleiro
                if (novaLinha >= 0 && novaLinha < 8 && novaColuna >= 0 && novaColuna < 8) {
                    printf("-> (%d, %d)\n", novaLinha, novaColuna);
                }
            }
        }
    }

    return 0;
}
