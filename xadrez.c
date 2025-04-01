#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    

    int torre;
   
    do {
        printf("APARECERA SUA ESCOLHA ACIMA\n");
        printf("Escolha qual lado a Torre irá através de numero\n");
        printf("1.Esquerda\n");
        printf("2.Direita\n");
        printf("3.Mova Até 5 Casas\n");
        printf("Escolha uma opção:\n");
        scanf("%d", &torre);
       
        switch(torre) {
            case 1:
                printf("Vc escolheu Esquerda\n");
                break;
            case 2:
                printf("VC escolheu Direita\n");
                break;
            case 3:
                printf("Movendo 5 casas.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (torre != 3);


               }

