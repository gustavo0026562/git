#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-23 - MAIOR DE DOIS NUMEROS           \n"
       "Dois atletas registraram suas pontuacoes em uma prova.\n"
       "O sistema precisa identificar qual foi a maior pontuacao.\n"
       "O programa deve receber dois numeros e mostrar qual\n"
       "deles e o maior.\n");                                                                                  
printf("\n********************************************************************************************************\n");


    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O maior numero e: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero e: %.2f\n", num2);
    } else {
        printf("Os dois numeros sao iguais.\n");
    }
}
