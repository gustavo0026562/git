#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-22 - PAR OU IMPAR           \n"
       "Em um jogo educativo, o participante digita um numero\n"
       "para descobrir sua classificacao.\n\n"
       "O programa deve verificar se o numero informado e\n"
       "par ou impar.\n");                                                                                   
printf("\n********************************************************************************************************\n");

int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

}
