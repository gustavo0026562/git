#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-34 - Programa JPA-35 - NUMEROS DE FIBONACCI (N TERMOS)            \n"
       "Um clube de matematica quer estudar a famosa sequencia\n"
       "de Fibonacci.\n"
       "O programa deve pedir um valor n e mostrar os primeiros\n"
       "termos da sequencia.\n\n");                                                                                 
printf("\n********************************************************************************************************\n");
    
	int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    printf("Sequencia de Fibonacci:\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }
}
