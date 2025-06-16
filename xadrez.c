#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// --- Funções Recursivas para Movimento das Peças ---

/**
 * @brief Simula o movimento recursivo da Torre para a direita.
 *
 * @param casasRestantes O número de casas restantes para a Torre se mover.
 */
void moverTorreRecursivo(int casasRestantes) {
    // Caso base: se não houver mais casas para mover, a recursão termina.
    if (casasRestantes == 0) {
        return;
    }
    // Ação: imprime a direção do movimento.
    printf("Direita\n");
    // Chamada recursiva: move para a próxima casa.
    moverTorreRecursivo(casasRestantes - 1);
}

/**
 * @brief Simula o movimento recursivo da Rainha para a esquerda.
 *
 * @param casasRestantes O número de casas restantes para a Rainha se mover.
 */
void moverRainhaRecursivo(int casasRestantes) {
    // Caso base: se não houver mais casas para mover, a recursão termina.
    if (casasRestantes == 0) {
        return;
    }
    // Ação: imprime a direção do movimento.
    printf("Esquerda\n");
    // Chamada recursiva: move para a próxima casa.
    moverRainhaRecursivo(casasRestantes - 1);
}

/**
 * @brief Simula o movimento recursivo do Bispo na diagonal (Cima, Direita)
 * com a adição de loops aninhados para ilustrar o conceito.
 * O loop externo controla o movimento vertical e o interno o horizontal.
 *
 * @param casasRestantes O número de "passos" diagonais restantes para o Bispo.
 */
void moverBispoRecursivoComLoops(int casasRestantes) {
    // Caso base para a recursão: se não houver mais "passos" diagonais, a recursão termina.
    if (casasRestantes == 0) {
        return;
    }

    // Loops aninhados para simular um único "passo" diagonal
    // Loop externo: movimento vertical (Cima)
    for (int i = 0; i < 1; i++) { // move 1 casa verticalmente
        printf("Cima\n");
        // Loop interno: movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) { // move 1 casa horizontalmente
            printf("Direita\n");
        }
    }

    // Chamada recursiva: simula o próximo "passo" diagonal.
    moverBispoRecursivoComLoops(casasRestantes - 1);
}


int main() {
    // --- Simulação do Movimento da Torre (usando Recursividade) ---
    printf("--- Movimento da Torre ---\n");
    int casasTorre = 5; // Número de casas a serem movidas pela Torre
    moverTorreRecursivo(casasTorre);
    printf("\n"); // Linha em branco para separar as simulações

    // --- Simulação do Movimento do Bispo (usando Recursividade com Loops Aninhados) ---
    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 5; // Número de "passos" diagonais para o Bispo
    moverBispoRecursivoComLoops(casasBispo);
    printf("\n"); // Linha em branco para separar as simulações

    // --- Simulação do Movimento da Rainha (usando Recursividade) ---
    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 8; // Número de casas a serem movidas pela Rainha
    moverRainhaRecursivo(casasRainha);
    printf("\n"); // Linha em branco para separar as simulações

    // --- Simulação do Movimento do Cavalo (usando Loops Aninhados Complexos) ---
    printf("--- Movimento do Cavalo ---\n");

    // O Cavalo se move duas casas para cima e uma casa para a direita em "L"
    const int movimentosVerticaisCavalo = 2; // Número de casas para cima
    const int movimentosHorizontaisCavalo = 1; // Número de casas para a direita

    // Loop externo para o movimento vertical (Cima)
    for (int i = 0; i < movimentosVerticaisCavalo + movimentosHorizontaisCavalo; i++) {
        // Condição para o movimento vertical: duas primeiras iterações
        if (i < movimentosVerticaisCavalo) {
            printf("Cima\n");
        }
        // Condição para o movimento horizontal: após o movimento vertical
        else if (i == movimentosVerticaisCavalo) {
            // Este loop interno garante que o movimento horizontal ocorra após os verticais
            // e pode ser controlado com 'break' para sair após 1 movimento
            for (int j = 0; j < movimentosHorizontaisCavalo; j++) {
                printf("Direita\n");
                // Usando break para garantir que o loop horizontal execute apenas uma vez,
                // mesmo se 'movimentosHorizontaisCavalo' fosse maior.
                break;
            }
        } else {
            // Usando break para sair do loop externo após todos os movimentos necessários
            // do "L" serem completados.
            break;
        }
    }

    printf("\n"); // Linha em branco final

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
