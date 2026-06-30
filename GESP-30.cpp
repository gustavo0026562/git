#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-30 - FATORIAL DE UM NUMERO           \n"
       "Um aluno de matematica precisa calcular o fatorial de\n"
       "alguns numeros para resolver exercicios escolares.\n"
       "O programa deve receber um numero e calcular seu\n"
       "fatorial utilizando for.\n\n");                                                                                 
printf("\n********************************************************************************************************\n");

 int numero, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for (i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d e: %llu\n", numero, fatorial);
    }
}
