#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-46 - CONTAR DE 1 A 10               \n"
        "Uma escola está ensinando estruturas de repetição para iniciantes em programação.\n"
       "O programa deve imprimir os números de 1 até 10, um por linha,\n"
       "utilizando a estrutura do...while.\n\n");                                                                             
printf("\n********************************************************************************************************\n");

int numero = 1;

    do {
        printf("%d\n", numero);
        numero++;
    } while (numero <= 10);
}
