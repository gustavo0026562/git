#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	
printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-14 - TIPO DE TRIANGULO                                                                  *\n"
       "Uma fabrica de estruturas metalicas produz suportes\n"
       "em formato de triangulo para eventos e construcoes.\n"
       "Antes da fabricacao, o sistema precisa verificar o\n"
       "tipo do triangulo com base nas medidas informadas\n"
       "pelo operador.\n"
       "O programa deve receber os tres lados do triangulo\n"
       "e informar se ele e:\n"
       "- Equilatero - todos os lados iguais;\n"
       "- Isosceles - dois lados iguais;\n"
       "- Escaleno - todos os lados diferentes.\n");                                                                                    
printf("\n********************************************************************************************************\n");
    
	float l1, l2, l3;
	
	printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &l1, &l2, &l3);

    if (l1 == l2 && l2 == l3) {
        printf("Triangulo Equilatero\n");
    }
    else if (l1 == l2 || l1 == l3 || l2 == l3) {
        printf("Triangulo Isosceles\n");
    }
    else {
        printf("Triangulo Escaleno\n");
    }

   
}	

	
	
	
	





	

