#include <stdio.h>

int main() {
	
	printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-16 - Múltiplo de 3 e/ou 5   *\n"
       "Uma lanchonete criou uma promoção especial.\n"
       "Se o número do pedido for múltiplo de 3, o cliente ganha um refrigerante.\n"
       "Se for múltiplo de 5, ganha uma sobremesa.\n"
       "Se for múltiplo dos dois, ganha os dois brindes\n"
       "O programa deve verificar o número do pedido e informar qual prêmio o cliente ganhou. \n");                                                                                    
printf("\n********************************************************************************************************\n");
    int pedido;

    printf("Digite o numero do pedido: ");
    scanf("%d", &pedido);

    if (pedido % 3 == 0 && pedido % 5 == 0) {
        printf("O cliente ganhou um refrigerante e uma sobremesa!\n");
    }
    else if (pedido % 3 == 0) {
        printf("O cliente ganhou um refrigerante!\n");
    }
    else if (pedido % 5 == 0) {
        printf("O cliente ganhou uma sobremesa!\n");
    }
    else {
        printf("O cliente nao ganhou nenhum brinde.\n");
    }

    return 0;
}
