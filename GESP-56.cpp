#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-56 - MENU FAST-FOOD DIGITAL               \n"
       "Você está programando um totem de autoatendimento.\n"
       "O cliente escolhe um número de 1 a 4 correspondente ao combo.\n"
       "O sistema deve exibir o nome do combo e o valor:\n"
       "1: Combo Hambúrguer + Batata + Refri - R$ 30,00\n"
       "2: Combo Pizza Brotinho + Refri - R$ 25,00\n"
       "3: Combo Salada + Suco Natural - R$ 22,00\n"
       "4: Combo Balde de Frango + Molho - R$ 35,00\n"
       "Outros valores: Opção inválida!\n\n");                                                                              
printf("\n********************************************************************************************************\n");

int opcao;
    
    printf("=== TOTEM DE AUTOATENDIMENTO ===\n");
    printf("1 - Combo Hamburguer + Batata + Refri\n");
    printf("2 - Combo Pizza Brotinho + Refri\n");
    printf("3 - Combo Salada + Suco Natural\n");
    printf("4 - Combo Balde de Frango + Molho\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    
    switch (opcao) {
        case 1:
            printf("Combo Hambúrguer + Batata + Refri - R$ 30,00\n");
            break;
        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;
        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00\n");
            break;
        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00\n");
            break;
        default:
            printf("Opção inválida! Escolha de 1 a 4.\n");
    }
}
