#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int opcao;

        printf("******Desafio de xadrez*****\n");
        printf("Escolha qual peca vc quer movimentar:\n");
        printf("Para movimentar o BISPO: digite 1\n");
        printf("Para movimentar a TORRE: digite 2\n");
        printf("Para movimentar a RAINHA: digite 3\n");
        printf("Para movimentar o CAVALO: digite 4\n");
        scanf("%d", &opcao);

        switch (opcao) 
        {

    // Implementação de Movimentação do Bispo - mover 5 casas diagonal superior direita
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        case 1:
            printf("Voce escolheu movimentar o BISPO! \n");

               for (int i = 0; i <= 5; i++)
               {
                 printf("Cima,direita\n");
               }
            break;
        


    // Implementação de Movimentação da Torre - mover 5 casas para direita
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        case 2:
            printf("Voce escolheu movimentar a TORRE! \n");

        int i = 1;
        
        while (i <= 5)
      {
        printf("%d Direita \n", i);
        i++;
      }  
      break;


    // Implementação de Movimentação da Rainha - mover 8 casas para esquerda 
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
       case 3: {
            printf("Voce escolheu movimentar a RAINHA! \n");

        int i = 1; 

        do {
            printf("%d Esquerda \n", i);
            i++;
        } while (i <= 8); 
        break;
    }



    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

case 4: {
            printf("Voce escolheu movimentar o CAVALO! \n");

        int movimentocavalo = 1; 

        while (movimentocavalo--)
        {
            for (int i =0; i , 2; i++) {
                printf("Cima\n");
            }
            printf("Direita\n");
        break;
    }



  default:
                printf("O numero que voce digitou nao eh valido\n");
            break;
        }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
