#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-38 - SENHA CORRETA             \n"
        "Um sistema de acesso precisa garantir que apenas\n"
       "usuarios autorizados entrem.\n"
       "O programa deve solicitar a senha repetidamente ate\n"
       "que o usuario digite a senha correta.\n\n");                                                                                 
printf("\n********************************************************************************************************\n");

    int senha;
    int senhaCorreta = 1234;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != senhaCorreta) {
        printf("Senha incorreta. Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!\n");
    
}
