#include <stdio.h>

// ---------- TORRE ----------
void moverTorre(int casas, int atual) {
    // Caso base: se já percorreu todas as casas, para a recursão
    if (atual > casas) return;

    printf("Casa %d: Direita\n", atual);

    // Chamada recursiva para a próxima casa
    moverTorre(casas, atual + 1);
}

// ---------- BISPO ----------
// Aqui, o bispo usa recursividade + loops aninhados
void moverBispoRecursivo(int casas, int nivel) {
    if (nivel > casas) return; // caso base da recursão

    // Loop aninhado: simula o movimento diagonal (vertical + horizontal)
    for (int i = 1; i <= 1; i++) { // vertical
        for (int j = 1; j <= 1; j++) { // horizontal
            printf("Casa %d: Cima, Direita\n", nivel);
        }
    }

    moverBispoRecursivo(casas, nivel + 1);
}

// ---------- RAINHA ----------
void moverRainha(int casas, int atual) {
    if (atual > casas) return;

    printf("Casa %d: Esquerda\n", atual);

    moverRainha(casas, atual + 1);
}

// MOVIMENTO COMPLEXO DO CAVALO


void moverCavalo() {
    // Movimento do cavalo: duas casas para CIMA e uma para a DIREITA
    // Usando loops aninhados e controle de fluxo com continue e break

    int casasCima = 2;
    int casasDireita = 1;
    int totalMovimentos = casasCima + casasDireita;

    printf("Movimento do CAVALO:\n");

    // Loop externo: movimentação vertical
    for (int i = 1; i <= casasCima; i++) {
        printf("Casa %d: Cima\n", i);

        // Loop interno: controla possíveis movimentos extras (simulação mais complexa)
        for (int j = 1; j <= totalMovimentos; j++) {
            if (j > casasDireita) {
                // Evita movimentos desnecessários
                continue;
            }

            if (i == casasCima && j == casasDireita) {
                printf("Casa %d: Direita\n", i + j);
                break; // sai do loop após completar o movimento em "L"
            }
        }
    }

    printf("\n");
}

// FUNÇÃO PRINCIPAL

int main() {

    // ---------- TORRE ----------
    printf("Movimento da TORRE:\n");
    moverTorre(5, 1);
    printf("\n");

    // ---------- BISPO ----------
    printf("Movimento do BISPO:\n");
    moverBispoRecursivo(5, 1);
    printf("\n");

    // ---------- RAINHA ----------
    printf("Movimento da RAINHA:\n");
    moverRainha(8, 1);
    printf("\n");

    // ---------- CAVALO ----------
    moverCavalo();

    printf("Fim da simulação de movimentos!\n");

    return 0;
}
