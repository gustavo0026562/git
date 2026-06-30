#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-27 - TABUADA DE UM NUMERO           \n"
       "Um estudante esta treinando matematica e deseja visualizar\n"
       "rapidamente a tabuada de um numero.\n"
       "O programa deve receber um numero digitado pelo usuario\n"
       "e mostrar sua tabuada de 1 a 10 usando for.\n\n");                                                                                  
printf("\n********************************************************************************************************\n");

int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}
