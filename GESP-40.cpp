#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-40 - TABUADA COM WHILE              \n"
       "Um aluno deseja praticar multiplicacao usando repeticao.\n"
       "O programa deve receber um numero e mostrar sua\n"
       "tabuada de 1 a 10 utilizando while.\n\n");                                                                                
printf("\n********************************************************************************************************\n");
    int num, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Tabuada do %d:\n", num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
}
