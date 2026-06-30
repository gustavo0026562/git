#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-31 - CONTAGEM REGRESSIVA           \n"
       "Uma competicao escolar utiliza uma contagem regressiva\n"
       "antes da largada.\n"
       "O programa deve mostrar os numeros de 10 ate 1 na tela.\n\n");                                                                                  
printf("\n********************************************************************************************************\n");

int i;

    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
}
