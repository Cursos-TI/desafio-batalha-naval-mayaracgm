#include <stdio.h>

// Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.


// Tamanho do tabuleiro
#define TAMANHO 10

// Valor que representa navio
#define NAVIO 3

int main() { // Nível Aventureiro - Dois navios na diagonal

    // Declaração do tabuleiro 10x10, inicializado com água (0)
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // ----------------------------
    // Navio Diagonal 1 - Principal (tabuleiro[i][i])
    // Começa em (1,1) e vai até (3,3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[1 + i][1 + i] = NAVIO;
    }

    // ----------------------------
    // Navio Diagonal 2 - Secundária (tabuleiro[i][9 - i])
    // Começa em (0,9) e vai até (2,7)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = NAVIO;
    }

    // ----------------------------
    // Exibição do Tabuleiro
    // ----------------------------
    printf("Tabuleiro com dois navios diagonais:\n\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
