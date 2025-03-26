/* ==============================
 * NIVEL NOVATO
  ============================== */

// Função para movimentar a Torre (5 casas para a direita) usando for
void moverTorre() {
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita %d\n", i);
    }
    printf("\n");
}

// Função para movimentar o Bispo (5 casas na diagonal para cima e direita) usando while
void moverBispo() {
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= 5) {
        printf("Cima, Direita %d\n", i);
        i++;
    }
    printf("\n");
}

// Função para movimentar a Rainha (8 casas para a esquerda) usando do-while
void moverRainha() {
    printf("Movimento da Rainha:\n");
    int i = 1;
    do {
        printf("Esquerda %d\n", i);
        i++;
    } while (i <= 8);
    printf("\n");
}

/* ==============================
 * NIVEL INTERMEDIÁRIO
 ============================== */

// Função para movimentar o Cavalo (2 casas para baixo e 1 para a esquerda) usando loops aninhados
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    printf("Esquerda\n");
    printf("\n");
}

/* ==============================
 * NIVEL AVANÇADO
 ============================== */

// Função recursiva para movimentar a Torre
void moverTorreRecursiva(int passos) {
    if (passos == 0) return;
    printf("Direita %d\n", passos);
    moverTorreRecursiva(passos - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispoRecursivo(int passos) {
    if (passos == 0) return;
    printf("Cima, Direita %d\n", passos);
    moverBispoRecursivo(passos - 1);
}

// Função recursiva para movimentar a Rainha
void moverRainhaRecursiva(int passos) {
    if (passos == 0) return;
    printf("Esquerda %d\n", passos);
    moverRainhaRecursiva(passos - 1);
}

int main() {
    // Chamada das funções de movimentação básica
    moverTorre();
    moverBispo();
    moverRainha();
    moverCavalo();
    
    // Chamada das funções de movimentação avançada com recursão
    printf("Movimento Recursivo da Torre:\n");
    moverTorreRecursiva(5);
    printf("\n");
    
    printf("Movimento Recursivo do Bispo:\n");
    moverBispoRecursivo(5);
    printf("\n");
    
    printf("Movimento Recursivo da Rainha:\n");
    moverRainhaRecursiva(8);
    printf("\n");
    
    return 0;
}
