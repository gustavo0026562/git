#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-49 - SENHA ATE ACERTAR               \n"
       "Um sistema solicita a senha repetidamente até o usuário digitar 2656.\n"
       "Quando acertar, exibe 'Acesso Concedido!'.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 2656) {
            printf("Senha incorreta!\n");
        }

    } while (senha != 2656);

    printf("Acesso Concedido!\n");
}
