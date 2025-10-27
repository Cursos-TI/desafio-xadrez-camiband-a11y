#include <stdio.h>

// Função recursiva para movimentação do BISPO (5 casas na diagonal superior direita)
void moverBispo(int passo) {
    if (passo > 5) return; // Condição de parada
    for (int i = 0; i < 1; i++) { // Loop aninhado simbólico para representar linha e coluna
        printf("Passo %d: Cima e Direita\n", passo);
    }
    moverBispo(passo + 1); // Chamada recursiva
}

// Função recursiva para movimentação da TORRE (5 casas para a direita)
void moverTorre(int passo) {
    if (passo > 5) return;
    printf("Passo %d: Direita\n", passo);
    moverTorre(passo + 1); // Chamada recursiva
}

// Função recursiva para movimentação da RAINHA (8 casas para a esquerda)
void moverRainha(int passo) {
    if (passo > 8) return;
    printf("Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1);
}

int main() {
    int opcao;

    printf("****** Desafio Final de Xadrez - MateCheck ******\n");
    printf("Escolha qual peça você quer movimentar:\n");
    printf("1 - BISPO\n");
    printf("2 - TORRE\n");
    printf("3 - RAINHA\n");
    printf("4 - CAVALO\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nVocê escolheu movimentar o BISPO!\n");
            moverBispo(1); // Função recursiva com loops aninhados
            break;

        case 2:
            printf("\nVocê escolheu movimentar a TORRE!\n");
            moverTorre(1); // Função recursiva simples
            break;

        case 3:
            printf("\nVocê escolheu movimentar a RAINHA!\n");
            moverRainha(1); // Função recursiva simples
            break;

        case 4:
            printf("\nVocê escolheu movimentar o CAVALO!\n");
            // Movimentação do cavalo usando loops com múltiplas condições e uso de continue/break
            for (int linha = 0; linha < 3; linha++) {
                for (int coluna = 0; coluna < 3; coluna++) {

                    // Ignora movimentos inválidos
                    if (linha == coluna) continue;

                    // Simula o movimento em L (2 para cima, 1 para direita)
                    if (linha == 2 && coluna == 1) {
                        printf("Movimento em L: 2 para Cima e 1 para Direita\n");
                        break; // Sai do loop interno após movimento válido
                    }
                }
            }
            break;

        default:
            printf("\nO número digitado não é válido!\n");
            break;
    }

    printf("\n--- Fim do desafio! ---\n");
    return 0;
}