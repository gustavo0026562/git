#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-36 - CONTAR ATE 10 COM WHILE            \n"
       "Uma crianca esta aprendendo contagem numerica no computador.\n"
       "O programa deve imprimir os numeros de 1 ate 10\n"
       "usando while.\n\n");                                                                                 
printf("\n********************************************************************************************************\n");
    int i = 1;

    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
}
