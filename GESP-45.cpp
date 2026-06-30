#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-45 - MENU ATE ESCOLHER SAIR               \n"
       "Um caixa eletronico simples apresenta opcoes ao usuario.\n"
       "O programa deve exibir um menu repetidamente ate\n"
       "que a opcao \"sair\" seja escolhida.\n\n");                                                                              
printf("\n********************************************************************************************************\n");
    int opcao = 0;

    while (opcao != 4) {
        printf("\n=== MENU ===\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Consultando saldo...\n");
        } else if (opcao == 2) {
            printf("Deposito realizado.\n");
        } else if (opcao == 3) {
            printf("Saque realizado.\n");
        } else if (opcao == 4) {
            printf("Encerrando o programa...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    }
}
