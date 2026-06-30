#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-48 - MENU COM OPCAO DE SAIR               \n"
       "Um programa exibe um menu repetidamente.\n"
       "Opção 1: mostrar mensagem 'Você escolheu a mensagem!'\n"
       "Opção 2: sair do programa.\n"
       "O menu continua até o usuário escolher sair.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

int opcao;

    do {
        printf("\nMenu\n");
        printf("1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a mensagem!\n");
        }

    } while (opcao != 2);

    printf("Programa encerrado.\n");
}
