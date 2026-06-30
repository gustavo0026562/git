#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-15 - QUANTAS CAIXAS CABEM DENTRO DO CAMINHAO   *\n"
       "Uma empresa de logistica precisa calcular quantas caixas\n"
       "podem ser transportadas em um caminhao sem ultrapassar\n"
       "o espaco disponivel.\n"
       "O sistema deve receber as dimensoes do caminhao e das\n"
       "caixas (altura, largura e comprimento) e calcular\n"
       "quantas caixas cabem no interior do veiculo.\n"
       "O programa devera utilizar variaveis para armazenar os\n"
       "valores e, como teste, o aluno deve digitar os valores\n"
       "fornecidos pelo professor para verificar o resultado\n"
       "do calculo.                                                                                              \n");                                                                                    
printf("\n********************************************************************************************************\n");

float altCam, largCam, compCam;
float altCx, largCx, compCx;
int qtdAlt, qtdLarg, qtdComp, total;

printf("Digite a altura do caminhao: ");
    scanf("%f", &altCam);

    printf("Digite a largura do caminhao: ");
    scanf("%f", &largCam);

    printf("Digite o comprimento do caminhao: ");
    scanf("%f", &compCam);

    printf("\nDigite a altura da caixa: ");
    scanf("%f", &altCx);

    printf("Digite a largura da caixa: ");
    scanf("%f", &largCx);

    printf("Digite o comprimento da caixa: ");
    scanf("%f", &compCx);

    qtdAlt = altCam / altCx;
    qtdLarg = largCam / largCx;
    qtdComp = compCam / compCx;

    total = qtdAlt * qtdLarg * qtdComp;

    printf("\nQuantidade de caixas que cabem no caminhao: %d\n", total);

















}
