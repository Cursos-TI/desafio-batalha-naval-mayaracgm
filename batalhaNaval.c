
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10     // Tamanho do tabuleiro
#define TAM_HAB 5      // Tamanho das matrizes de habilidade
#define NAVIO 3        // Valor para navio
#define HABILIDADE 1   // Valor para área afetada por habilidade

int main() {
    // Nível Aventureiro - Dois navios na diagonal

    // Declaração do tabuleiro 10x10, inicializado com água (0)
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // Navio Diagonal 1 - Principal (tabuleiro[i][i])
    for (int i = 0; i < 3; i++) {
        tabuleiro[1 + i][1 + i] = NAVIO;
    }

    // Navio Diagonal 2 - Secundária (tabuleiro[i][9 - i])
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = NAVIO;
    }

    // Nível Mestre - Habilidades Especiais com Matrizes

    // Matrizes de habilidade
    int cone[TAM_HAB][TAM_HAB] = {0};
    int cruz[TAM_HAB][TAM_HAB] = {0};
    int octaedro[TAM_HAB][TAM_HAB] = {0};

    // Cone - triangular apontando para baixo
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = TAM_HAB / 2 - i; j <= TAM_HAB / 2 + i; j++) {
            if (j >= 0 && j < TAM_HAB) {
                cone[i][j] = HABILIDADE;
            }
        }
    }

    // Cruz - linha e coluna centrais
    for (int i = 0; i < TAM_HAB; i++) {
        cruz[TAM_HAB / 2][i] = HABILIDADE;
        cruz[i][TAM_HAB / 2] = HABILIDADE;
    }

    // Octaedro - formato de losango
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            if (abs(i - TAM_HAB / 2) + abs(j - TAM_HAB / 2) <= 1) {
                octaedro[i][j] = HABILIDADE;
            }
        }
    }

    // Exibição das matrizes de habilidade
    printf("\nExemplo de saída de habilidade em cone:\n\n");
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nExemplo de saída de habilidade em cruz:\n\n");
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\nExemplo de saída de habilidade em octaedro:\n\n");
    for (int i = 0; i < TAM_HAB; i++) {
        for (int j = 0; j < TAM_HAB; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }
    return 0;
}