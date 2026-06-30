#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-50 - NUMERO POSITIVO OBRIGATORIO               \n"
       "Um sistema bancário aceita apenas valores positivos.\n"
       "O programa solicita números até que o usuário digite um valor maior que zero.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

float num;
    
    do {
        printf("Digite um numero positivo: ");
        scanf("%f", &num);
        
        if (num <= 0) {
            printf("Valor invalido! O numero deve ser positivo.\n");
        }
    } while (num <= 0);
    
    printf("Numero valido recebido: %.2f\n", num);
}
