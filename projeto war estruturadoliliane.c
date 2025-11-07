#include <studio.h>
#include <string.h>
// Criando a quantidade de territorios
#define TAM 5

//Estrutura para representar um território
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};
// Função limpar buffer
void limpaBufferEntrada() {
    int c; 
    while((c=getchar())!='\n'&& c!=EOF);
}
// FUNÇÃO PRINCIPAL

int main() {
    struct Territorio tabuleiro[TAM];
    int i;

    printf("===============================================================\n");
    printf("     PROJETO WAR ESTRUTURADO          \n");
    printf("===============================================================\n");

    //Cadastrando os dados
    printf("CADASTRO DE %d TERRITÓRIOS: \n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("TERRITÓRIO %d\n", i + 1);

        printf("NOME DO TERRITÓRIO:  ");
        scanf(" %[^\n]", tabuleiro[i].nome); // PARA LE STRINGS COM ESPAÇO
        printf("COR DO EXÉRCITO: ");
        scanf(" %[^\n]", tabuleiro[i].cor);

        printf("NÚMERO DE TROPAS: ");
        scanf("%d", &tabuleiro[i].tropas);


        printf("--------------------------------------------------------------------------\n");
    }
// EXIBIÇÃO DOS DADOS
printf("\n==================================================================================\n");
    printf("     LISTA DE TERRITÓRIOS         \n");
printf("====================================================================================\n");
    
     for (i = 0; i < TAM; i++) {
        printf("TERRITÓRIO %d:\n", i+ 1);
        printf(" Nome: %s\n", tabuleiro[i].nome);
        printf("  COR DO EXÉRCITO; %s\n", tabuleiro[i].cor);
        printf("  TROPAS: %d\n", tabuleiro[i].tropas);

        printf("------------------------------------------------------------------------------\n");
     }
      printf("TERRITÓRIOS CADASTRADOS COM SUCESSO!\n");

      printf("FIM!\n");
      return 0;
}
