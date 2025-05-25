#include <stdio.h>

// Movimento da Torre (recursivo)
// Move 5 casas para a direita, imprimindo "Direita" a cada casa
void moverTorreRecursivo(int casas) {
    if (casas <= 0)
        return; // Caso base: nenhum movimento restante
    printf("Direita\n");
    moverTorreRecursivo(casas - 1); // Chamada recursiva decrescendo o contador
}

// Movimento da Rainha (recursivo)
// Move 8 casas para a esquerda, imprimindo "Esquerda" a cada casa
void moverRainhaRecursivo(int casas) {
    if (casas <= 0)
        return;
    printf("Esquerda\n");
    moverRainhaRecursivo(casas - 1);
}

// Movimento do Bispo (recursivo + loops aninhados)
// O bispo se move diagonalmente para cima e direita
// A recursão controla a quantidade de casas para movimentar verticalmente (cima)
// Para cada casa vertical, move horizontalmente para a direita (loop interno)
void moverBispoRecursivo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0)
        return;

    // Loop interno para movimento horizontal (direita)
    for (int h = 0; h < casasHorizontais; h++) {
        printf("Cima, Direita\n"); // Imprime combinação diagonal
    }

    // Chamada recursiva para a próxima linha vertical
    moverBispoRecursivo(casasVerticais - 1, casasHorizontais);
}

// Movimento do Cavalo (loops aninhados complexos)
// Movimento em L: 2 casas para cima, 1 casa para a direita
// Utiliza loop for externo para movimento vertical
// Loop while interno para movimento horizontal
// Uso de continue e break para controle de fluxo
void moverCavalo() {
    int casasParaCima = 2;
    int casasParaDireita = 1;

    // Loop externo: movimento vertical (2 casas para cima)
    for (int vertical = 0; vertical < casasParaCima; vertical++) {
        printf("Cima\n");
    }

    // Loop interno: movimento horizontal (1 casa para direita)
    int horizontal = 0;
    while (horizontal < casasParaDireita) {
        printf("Direita\n");
        horizontal++;
    }
}


int main() {
    // Definindo as quantidades de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorreRecursivo(casasTorre);

    printf("\nMovimento do Bispo (5 casas na diagonal para cima e direita):\n");
    moverBispoRecursivo(casasBispo, 1);  // 1 casa na horizontal a cada movimento vertical

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainhaRecursivo(casasRainha);

    printf("\nMovimento do Cavalo (2 casas para cima e 1 casa para a direita):\n");
    moverCavalo();

    return 0;
}
