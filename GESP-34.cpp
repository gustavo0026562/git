#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-34 - VERIFICAR SE UM NUMERO E PRIMO            \n"
       "Um estudante esta aprendendo sobre numeros primos e\n"
       "quer automatizar a verificacao.\n"
       "O programa deve receber um numero e informar se ele\n"
       "e primo utilizando for.\n\n");                                                                                 
printf("\n********************************************************************************************************\n");
    int num, i, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo) {
        printf("%d e primo.\n", num);
    } else {
        printf("%d nao e primo.\n", num);
    }
}
