#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-24 - PODE VOTAR?           \n"
       "Um sistema de cadastro eleitoral precisa verificar se\n"
       "uma pessoa ja possui idade para votar.\n"
       "O usuario informa sua idade, e o programa deve dizer\n"
       "se ele pode ou nao votar.\n\n");                                                                                  
printf("\n********************************************************************************************************\n");


    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Voce pode votar.\n");
    } else {
        printf("Voce nao pode votar.\n");
    }
}
