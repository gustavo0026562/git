#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-19 - ORDEM CRESCENTE (3 NUMEROS)           \n"
       "Durante uma competicao escolar, tres alunos\n"
       "obtiveram pontuacoes diferentes.\n\n"
       "O sistema precisa organizar os valores do menor\n"
       "para o maior para facilitar a classificacao.\n\n"
       "O programa deve receber tres numeros e exibi-los\n"
       "em ordem crescente.                                                                                      \n");                                                                                    
printf("\n********************************************************************************************************\n");

int a, b, c, aux;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    
    if (a > b) {
        aux = a;
        a = b;
        b = aux;
    }

    
    if (a > c) {
        aux = a;
        a = c;
        c = aux;
    }


    if (b > c) {
        aux = b;
        b = c;
        c = aux;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);
}
