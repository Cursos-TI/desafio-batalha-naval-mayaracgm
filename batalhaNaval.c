#include <stdio.h>

int main() {
    // Nível Novato - Posicionamento dos Navios
    #include <stdio.h>

    // Declaração da matriz bidimensional para o tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // Posicionamento do navio vertical (tamanho 3)
    int coluna_vertical = 2; // coluna fixa
    for (int linha = 0; linha < 3; linha++) {
        tabuleiro[linha][coluna_vertical] = 1;
        printf("Navio Vertical - Parte %d: (%d, %d)\n", linha + 1, linha, coluna_vertical);
    }

    // Posicionamento do navio horizontal (tamanho 4)
    int linha_horizontal = 4; // linha fixa
    for (int coluna = 0; coluna < 4; coluna++) {
        tabuleiro[linha_horizontal][coluna] = 1;
        printf("Navio Horizontal - Parte %d: (%d, %d)\n", coluna + 1, linha_horizontal, coluna);
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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
