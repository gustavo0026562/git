#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-32 - QUADRADO DOS NUMEROS DE 1 A 10           \n"
       "Um professor quer demonstrar o conceito de potencia ao\n"
       "quadrado para a turma.\n"
       "O programa deve mostrar o quadrado de cada numero\n"
       "de 1 a 10.\n\n");                                                                                  
printf("\n********************************************************************************************************\n");

int i;

    for (i = 1; i <= 10; i++) {
        printf("O quadrado de %d e: %d\n", i, i * i);
    }
}
