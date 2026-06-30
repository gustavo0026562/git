#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-44 - CONTAR DIGITOS DE UM NUMERO               \n"
       "Um sistema bancario deseja identificar quantos\n"
       "digitos possui um numero informado.\n"
       "O programa deve receber um numero positivo e\n"
       "mostrar quantos digitos ele possui.\n\n");                                                                               
printf("\n********************************************************************************************************\n");
    int num, digitos = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if (num == 0) {
        digitos = 1;
    } else {
        while (num > 0) {
            digitos++;
            num = num / 10;
        }
    }

    printf("Quantidade de digitos: %d\n", digitos);
}
