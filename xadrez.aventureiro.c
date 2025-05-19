#include <stdio.h>

// Funções recursivas para outras peças
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função para o Cavalo com loops aninhados
void moverCavalo() {
    const int movimentos = 3; // Número de movimentos em L completos
    
    printf("\n=== Movimento do Cavalo (2 Baixo, 1 Esquerda) ===\n");
    
    // Loop for para controlar quantos movimentos em L serão feitos
    for (int l = 0; l < movimentos; l++) {
        int casas_baixo = 0;
        
        // Loop while para as 2 casas para baixo
        while (casas_baixo < 2) {
            printf("Baixo\n");
            casas_baixo++;
        }
        
        // Única casa para esquerda (parte do movimento em L)
        printf("Esquerda\n");
    }
}

// Bispo com loops aninhados (versão alternativa)
void moverBispoAninhado() {
    int casas = 5;
    int vertical, horizontal;
    
    for (vertical = 0; vertical < casas; vertical++) {
        for (horizontal = 0; horizontal < casas; horizontal++) {
            if (vertical == horizontal) {
                printf("Cima, Direita\n");
                break;
            }
        }
    }
}

int main() {
    const int casas = 5;
    const int casas_rainha = 8;
    
    printf("=== Movimento da Torre (recursivo) ===\n");
    moverTorre(casas);
    
    printf("\n=== Movimento do Bispo (recursivo) ===\n");
    moverBispoRecursivo(casas);
    
    printf("\n=== Movimento da Rainha (recursivo) ===\n");
    moverRainha(casas_rainha);
    
    printf("\n=== Movimento do Bispo (loops aninhados) ===\n");
    moverBispoAninhado();
    
    // Chamada para o movimento do Cavalo
    moverCavalo();
    
    return 0;
}