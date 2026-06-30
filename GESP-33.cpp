#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-33 - MULTIPLOS DE 3 ENTRE 1 E 30            \n"
       "Um aplicativo educacional deseja destacar os numeros\n"
       "multiplos de 3 para os alunos.\n"
       "O programa deve listar todos os multiplos de 3\n"
       "entre 1 e 30.\n\n");                                                                                  
printf("\n********************************************************************************************************\n");
    
	
	int i;

    printf("Multiplos de 3 entre 1 e 30:\n");

    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    
}
