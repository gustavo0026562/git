#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-59 - ASSISTENTE DE DIREÇÃO (GPS)              \n"
       "Um robô lê letras para decidir a direção:\n"
       "N: Seguir para o Norte.\n"
       "S: Seguir para o Sul.\n"
       "L: Virar à Leste (Direita).\n"
       "O: Virar à Oeste (Esquerda).\n"
       "Qualquer outra letra: Comando inválido! Pare o robô.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

char direcao;
    
    printf("Digite a letra da direcao (N, S, L, O): ");
    scanf(" %c", &direcao);
    
    switch (direcao) {
        case 'N':
        case 'n':
            printf("Seguir para o Norte.\n");
            break;
        case 'S':
        case 's':
            printf("Seguir para o Sul.\n");
            break;
        case 'L':
        case 'l':
            printf("Virar à Leste (Direita).\n");
            break;
        case 'O':
        case 'o':
            printf("Virar à Oeste (Esquerda).\n");
            break;
        default:
            printf("Comando inválido! Pare o robô.\n");
    }
}
