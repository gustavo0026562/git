#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\n*Aluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         *\n");	
printf(" Programa GESP-58 - CALCULADORA DE BOLSO               \n"
       "O sistema recebe dois numeros e uma operacao matematica.\n"
       "Operacoes validas: +, -, *, /\n"
       "O programa deve calcular o resultado usando switch-case.\n"
       "Caso contrario: Operacao matematica nao reconhecida.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

  float a, b, resultado;
    char operacao;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite a operacao (+ - * /): ");
    scanf(" %c", &operacao);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    
    switch (operacao) {
        case '+':
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        default:
            printf("Operação matemática não reconhecida.\n");
    }
}
