#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-55 - MAIOR NUMERO ATE NEGATIVO               \n"
       "O programa le números positivos digitados pelo usuário.\n"
       "Ele para quando um número negativo for digitado.\n"
       "Ao final, mostra o maior número informado.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

float num, maior = 0;
    int primeiro = 1;
    
    printf("Digite notas positivas (negativo para parar):\n");
    
    while (1) {
        scanf("%f", &num);
        
        if (num < 0) break;
        
        if (primeiro || num > maior) {
            maior = num;
            primeiro = 0;
        }
    }
    
    if (!primeiro) {
        printf("O maior numero informado foi: %.2f\n", maior);
    } else {
        printf("Nenhum numero positivo foi informado.\n");
    }
}
