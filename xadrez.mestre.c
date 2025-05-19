// Desafio - Nivel Mestre

#include <stdio.h>

// Funções recursivas
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

// Função para o Cavalo com loops complexos
void moverCavalo() {
    int movimentos = 5; // Número de movimentos em L
    int cima, direita;
    
    for (cima = 0; cima < movimentos * 2; cima += 2) {
        for (direita = 0; direita < movimentos; direita++) {
            if (cima % 2 != 0 || direita % 1 != 0) continue;
            
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
            
            if (direita == movimentos - 1) break;
        }
    }
}

// Bispo com loops aninhados
void moverBispoAninhado() {
    int casas = 5;
    int vertical, horizontal;
    
    for (vertical = 0; vertical < casas; vertical++) {
        for (horizontal = 0; horizontal < casas; horizontal++) {
            if (vertical == horizontal) {
                printf("Cima, Direita\n");
                break; // Só um movimento por linha vertical
            }
        }
    }
}

int main() {
    const int casas = 5;
    const int casas_rainha = 8;
    
    printf("=== Movimento da Torre (recursivo) ===\n");
    moverTorre(casas);
    printf("\n");
    
    printf("=== Movimento do Bispo (recursivo) ===\n");
    moverBispoRecursivo(casas);
    printf("\n");
    
    printf("=== Movimento da Rainha (recursivo) ===\n");
    moverRainha(casas_rainha);
    printf("\n");
    
    printf("=== Movimento do Cavalo (loops aninhados) ===\n");
    moverCavalo();
    printf("\n");
    
    printf("=== Movimento do Bispo (loops aninhados) ===\n");
    moverBispoAninhado();
    printf("\n");
    
    return 0;
} 

