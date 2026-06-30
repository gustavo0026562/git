#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-60 - VALIDADOR DE DIAS UTEIS               \n"
       "O sistema recebe um numero de 1 a 7 representando os dias da semana.\n"
       "2 a 6: Dia util. Acesso liberado para o trabalho.\n"
       "1 e 7: Fim de semana. Predio fechado.\n"
       "Outros numeros: Número de dia invalido.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

int dia;
    
    printf("Digite o numero do dia (1-Domingo a 7-Sabado): ");
    scanf("%d", &dia);
    
    switch (dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia util. Acesso liberado para o trabalho.\n");
            break;
        case 1:
        case 7:
            printf("Fim de Semana. Predio fechado.\n");
            break;
        default:
            printf("Numero de dia invalido.\n");
    }
}
