#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-45 - TABUADA DE UM NUMERO               \n"
       "Um estudante quer praticar multiplicação usando do...while.\n"
       "O programa deve receber um numero e exibir sua tabuada de 1 ate 10.\n\n");                                                                             
printf("\n********************************************************************************************************\n");

int numero;
    int contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    do {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
        contador++;
    } while (contador <= 10);
}
