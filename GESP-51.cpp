#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-51 - CONTAGEM REGRESSIVA               \n"
       "Uma corrida escolar faz contagem regressiva antes da largada.\n"
       "O programa deve exibir números de 10 até 1 usando do...while.\n\n");                                                                             
printf("\n********************************************************************************************************\n");

int i = 10;
    
    printf("Contagem regressiva para a largada:\n");
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);
    
    printf("Largada!\n");
}
