#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-42 - QUANTIDADE DE NUMEROS IMPARES DIGITADOS               \n"
       "Uma pesquisa escolar precisa analisar numeros\n"
       "digitados pelos participantes.\n"
       "O programa deve pedir 10 numeros e informar\n"
       "quantos deles sao impares.\n\n");                                                                                
printf("\n********************************************************************************************************\n");
    int num, contador = 0, impares = 0;

    while (contador < 10) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 != 0) {
            impares++;
        }

        contador++;
    }

    printf("Quantidade de numeros impares: %d\n", impares);
}
