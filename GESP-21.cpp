#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-21 - ANO BISSEXTO           \n"
       "Um aplicativo financeiro registra lucros e prejuizos.\n"
       "Valores positivos representam lucro e valores negativos\n"
       "representam prejuizo.\n\n"
       "O programa deve receber um numero e informar se ele e\n"
       "positivo, negativo ou zero.\n");                                                                                    
printf("\n********************************************************************************************************\n");

float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("O numero e positivo.\n");
    } else if (numero < 0) {
        printf("O numero e negativo.\n");
    } else {
        printf("O numero e zero.\n");
    }
}
