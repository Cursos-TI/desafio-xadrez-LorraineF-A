#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Névil Novato 

int main() {
    // Movimento da Torre (5 casas para a direita usando for)
    printf("Movimento da Torre (5 casas para a direita):\n");
    const int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal superior direita usando while)
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    const int casas_bispo = 5;
    int contador_bispo = 0;
    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda usando do-while)
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    const int casas_rainha = 8;
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);

    return 0; 
}
