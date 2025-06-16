#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Simulação do Movimento da Torre (usando for) ---
    printf("--- Movimento da Torre ---\n");
    // A torre se moverá 5 casas para a direita
    int casasTorre = 5; // Número de casas a serem movidas pela Torre
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n"); // Linha em branco para separar as simulações

    // --- Simulação do Movimento do Bispo (usando while) ---
    printf("--- Movimento do Bispo ---\n");
    // O bispo se moverá 5 casas na diagonal para cima e à direita
    int casasBispo = 5; // Número de casas a serem movidas pelo Bispo
    int contadorBispo = 0; // Contador para controlar o número de movimentos
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        contadorBispo++; // Incrementa o contador
    }
    printf("\n"); // Linha em branco para separar as simulações

    // --- Simulação do Movimento da Rainha (usando do-while) ---
    printf("--- Movimento da Rainha ---\n");
    // A rainha se moverá 8 casas para a esquerda
    int casasRainha = 8; // Número de casas a serem movidas pela Rainha
    int contadorRainha = 0; // Contador para controlar o número de movimentos
    if (casasRainha > 0) { // Garante que o loop do-while execute pelo menos uma vez se houver movimentos
        do {
            printf("Esquerda\n"); // Imprime a direção do movimento
            contadorRainha++; // Incrementa o contador
        } while (contadorRainha < casasRainha);
    }
    printf("\n"); // Linha em branco para separar as simulações

    // --- Simulação do Movimento do Cavalo (usando loops aninhados: for e while) ---
    printf("--- Movimento do Cavalo ---\n");

    // O Cavalo se move duas casas para baixo
    int movimentosBaixoCavalo = 2; // Número de casas para baixo
    // O Cavalo se move uma casa para a esquerda
    int movimentosEsquerdaCavalo = 1; // Número de casas para a esquerda

    // Primeiro loop (for): simula as duas casas para baixo
    for (int i = 0; i < movimentosBaixoCavalo; i++) {
        printf("Baixo\n"); // Imprime a direção "Baixo"
    }

    // Segundo loop (while): simula a uma casa para a esquerda
    int contadorEsquerdaCavalo = 0; // Contador para o movimento para a esquerda
    while (contadorEsquerdaCavalo < movimentosEsquerdaCavalo) {
        printf("Esquerda\n"); // Imprime a direção "Esquerda"
        contadorEsquerdaCavalo++; // Incrementa o contador
    }

    printf("\n"); // Linha em branco final

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}