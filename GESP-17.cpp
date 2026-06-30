#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-17 - SENSOR DO PARQUE TEMATICO           \n"
       "Voce foi contratado para programar o sistema de seguranca\n"
       "de uma nova montanha-russa em um parque de diversoes.\n"
       "Por motivos de seguranca, existe uma altura minima de\n"
       "140 centimetros (1,40m) para poder entrar no brinquedo.\n"
       "Na entrada, ha um sensor digital que mede a altura da crianca\n"
       "em centimetros.\n\n"
       "O seu trabalho e criar um algoritmo que leia essa altura e\n"
       "decida se o painel vai acender a luz verde (liberado)\n"
       "ou a luz vermelha (barrado).                                                                             \n");                                                                                    
printf("\n********************************************************************************************************\n");


    int altura;

    printf("Digite a altura da crianca em centimetros: ");
    scanf("%d", &altura);

    if (altura >= 140) {
        printf("Luz verde: Liberado para entrar na montanha-russa!\n");
    } else {
        printf("Luz vermelha: Entrada proibida.\n");
    }
}

