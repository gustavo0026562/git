#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){

printf("\n********************************************************************************************************\n");	
printf("\nAluno: Gustavo Eduardo de Souza Pereira - RA 0026562                                                         \n");	
printf("Programa GESP-53 - CONFIRMAR SAIDA COM 'S'                \n"
       "Após cada operação, o sistema pergunta se o usuário deseja sair.\n"
       "O menu continua até que o usuário digite 's'.\n\n");                                                                              
printf("\n********************************************************************************************************\n");

char opcao;
    
    do {
        printf("\n=== MENU DE CADASTRO ===\n");
        printf("1 - Cadastrar usuario\n");
        printf("2 - Listar usuarios\n");
        printf("3 - Buscar usuario\n");
        printf("Digite 's' para sair.\n");
        
        printf("Escolha uma opcao ou 's' para sair: ");
        scanf(" %c", &opcao);
        
    } while (opcao != 's' && opcao != 'S');
    
    printf("Programa encerrado.\n");
}
