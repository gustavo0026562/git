#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-52 - SOMA ATE MULTIPLO DE 10              \n"
       "O programa soma números digitados pelo usuário.\n"
       "Ele para quando for digitado um número múltiplo de 10.\n"
       "Ao final, exibe a soma total.\n\n");                                                                             
printf("\n********************************************************************************************************\n");


    int num, soma = 0;
    
    printf("Digite numeros (multiplo de 10 para parar):\n");
    
    do {
        scanf("%d", &num);
        if (num % 10 != 0) {
            soma += num;
        }
    } while (num % 10 != 0);
    
    printf("Soma total dos valores: %d\n", soma);
}
