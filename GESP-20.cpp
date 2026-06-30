#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-20 - ANO BISSEXTO           \n"
       "Uma agenda digital precisa descobrir se determinado ano\n"
       "tera 366 dias.\n"
       "O usuario informa um ano, e o programa deve verificar\n"
       "se ele e bissexto ou nao.\n");                                                                                    
printf("\n********************************************************************************************************\n");

 int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }

}
