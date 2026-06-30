#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <stdio.h>
#include <string.h>

int main() {
	
printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-57 - CENTRAL DO BRINQUEDO ELETRONICO               \n"
       "Um urso eletrônico fala frases diferentes conforme a cor.\n"
       "Entrada: Verde, Amarelo ou Vermelho.\n"
       "Verde: Vamos brincar lá fora!\n"
       "Amarelo: Estou ficando com soninho...\n"
       "Vermelho: Estou com fome, hora do lanche!\n"
       "Outras cores: Cor desconhecida.\n\n");                                                                             
printf("\n********************************************************************************************************\n");

    char cor[20];
    int opcao = 0;
    
    

    printf("Digite a cor (Verde, Amarelo ou Vermelho): ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0)
        opcao = 1;
    else if (strcmp(cor, "Amarelo") == 0)
        opcao = 2;
    else if (strcmp(cor, "Vermelho") == 0)
        opcao = 3;

    switch (opcao) {
        case 1:
            printf("O urso diz: Vamos brincar la fora!\n");
            break;

        case 2:
            printf("O urso diz: Estou ficando com soninho...\n");
            break;

        case 3:
            printf("O urso diz: Estou com fome, hora do lanche!\n");
            break;

        default:
            printf("Cor desconhecida.\n");
    }

    return 0;
}
