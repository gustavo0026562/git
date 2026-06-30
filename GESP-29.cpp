#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-29 - NUMEROS PARES DE 0 A 50           \n"
       "Um jogo educativo precisa mostrar apenas os numeros pares\n"
       "para ensinar matematica basica.\n"
       "O programa deve exibir todos os numeros pares entre\n"
       "0 e 50.\n\n");                                                                                  
printf("\n********************************************************************************************************\n");

int i;

    for (i = 0; i <= 50; i += 2) {
        printf("%d\n", i);
    }
}
