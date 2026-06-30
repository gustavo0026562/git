#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-36 - SOMA DE NUMEROS ATE DIGITAR ZERO             \n"
       "Um caixa simples de mercado precisa somar valores\n"
       "digitados pelo operador.\n"
       "O programa deve continuar recebendo numeros ate que\n"
       "o usuario digite 0 e, ao final, mostrar a soma total.\n\n");                                                                                 
printf("\n********************************************************************************************************\n");
    int num, soma = 0;

    printf("Digite numeros (0 para encerrar):\n");
    scanf("%d", &num);

    while (num != 0) {
        soma += num;
        scanf("%d", &num);
    }

    printf("Soma total = %d\n", soma);
}
