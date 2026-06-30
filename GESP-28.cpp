#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-28 - SOMA DOS 100 PRIMEIROS NUMEROS NATURAIS           \n"
       "Uma loja deseja calcular rapidamente a soma de uma\n"
       "sequencia de numeros para um relatorio simples.\n"
       "O programa deve calcular a soma dos numeros de 1 ate 100\n"
       "utilizando um laco for.\n\n");                                                                                 
printf("\n********************************************************************************************************\n");

 int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos numeros de 1 ate 100 e: %d\n", soma);
}
