#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-42 - SOMA DOS PARES ENTRE 1 E 100               \n"
       "Um professor propos um desafio para calcular apenas\n"
       "os numeros pares de uma sequencia.\n"
       "O programa deve somar todos os numeros pares entre\n"
       "1 e 100 utilizando while.\n\n");                                                                                
printf("\n********************************************************************************************************\n");
    int num = 2;
    int soma = 0;

    while (num <= 100) {
        soma += num;
        num += 2;
    }

    printf("A soma dos numeros pares entre 1 e 100 e: %d\n", soma);
}
