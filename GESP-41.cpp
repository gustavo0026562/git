#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-41 - NUMERO PRIMO COM WHILE               \n"
       "Um estudante deseja verificar se determinado numero\n"
       "e primo utilizando outro tipo de repeticao.\n"
       "O programa deve testar se o numero possui apenas\n"
       "dois divisores usando while.\n\n");                                                                                
printf("\n********************************************************************************************************\n");

    int num, i = 2, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0;
    }

    while (i < num && primo) {
        if (num % i == 0) {
            primo = 0;
        }
        i++;
    }

    if (primo) {
        printf("%d e primo.\n", num);
    } else {
        printf("%d nao e primo.\n", num);
    }
}
