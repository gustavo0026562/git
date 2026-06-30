#include <stdio.h>
#include <string.h>
#include<locale.h>

int main() {
	
	printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-18 - LOGIN SIMPLES           \n"
       "Uma escola criou um sistema simples para acesso\n"
       "a biblioteca digital.\n\n"
       "O aluno deve informar usuario e senha corretos\n"
       "para entrar no sistema.\n\n"
       "O programa deve verificar se os dados digitados\n"
       "estao corretos e mostrar uma mensagem de acesso\n"
       "permitido ou negado.\n                                                                                   ");                                                                                    
printf("\n********************************************************************************************************\n");

    char usuario[20];
    char senha[20];

    printf("Digite o usuario: ");
    scanf("%s", usuario);

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "2656") == 0) {
        printf("Acesso permitido!\n");
    } else {
        printf("Acesso negado!\n");
    }

    return 0;
}
