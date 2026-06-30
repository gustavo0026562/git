#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-38 - VERIFICAR SE UM NUMERO E POSITIVO             \n"
        "Um sistema financeiro so aceita valores positivos\n"
       "para cadastro.\n"
       "O programa deve continuar pedindo numeros ate que\n"
       "o usuario digite um numero positivo.\n\n");                                                                                 
printf("\n********************************************************************************************************\n");

    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    while (num <= 0) {
        printf("Numero invalido. Digite um numero positivo: ");
        scanf("%d", &num);
    }

    printf("Numero aceito: %d\n", num);
}
