#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-54 - VALIDAR NUMERO ENTRE 1 E 5               \n"
       "Um jogo aceita apenas valores entre 1 e 5.\n"
       "O programa repete a solicitação enquanto o valor for inválido.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

int nivel;
    
    do {
        printf("Digite o nivel de dificuldade (1 a 5): ");
        scanf("%d", &nivel);
        
        if (nivel < 1 || nivel > 5) {
            printf("Nivel invalido! Digite um numero entre 1 e 5.\n");
        }
    } while (nivel < 1 || nivel > 5);
    
    printf("Nivel selecionado: %d\n", nivel);
}
