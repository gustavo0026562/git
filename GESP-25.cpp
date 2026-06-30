#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-25 - NOTAS E APROVACAO           \n"
       "Uma escola deseja automatizar a verificacao das notas\n"
       "dos alunos.\n"
       "O sistema deve receber a media final do estudante e\n"
       "informar se ele foi aprovado, em recuperacao ou\n"
       "reprovado.\n");                                                                                  
printf("\n********************************************************************************************************\n");


    float media;

    printf("Digite a media final do aluno: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aluno aprovado.\n");
    } else if (media >= 5) {
        printf("Aluno em recuperacao.\n");
    } else {
        printf("Aluno reprovado.\n");
    }
}
