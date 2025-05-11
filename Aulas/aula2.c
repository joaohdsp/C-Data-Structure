#include <stdio.h>
#include <stdlib.h>

typedef struct DADOS{
    int chave;
    char nome[50];
    //1 int = 4 bytes, então nome[50] = 154 bytes
}DADOS;

int main (){
    //Fazer a Estrutura ser um vetor alocado dinamicamente
    struct DADOS* D;
    
    D=(DADOS*)MALLOC(COLUNAS * SIZEOF(DADOS));
    //D é um ponteiro que aponta para um espaço de memória que tenha o tamanho
    // de COLUNAS vezes o tamanho em bytes de DADOS

    //Fazer a Estrutura ser uma matriz alocada dinamicamente:
    struct DADOS** DD;

    DD=(DADOS**)MALLOC(DUAS LINHAS * SIZEOF(DADOS))
    for(i = 0; i < 2; i++){
      DD[i]=(DADOS*)MALLOC(DUAS COLUNAS * SIZEOF(DADOS));  
    }

    int linhas, colunas;
    int i,j;

    //Solicita ao usuário o número de linhas e colunas
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas: ");
    scanf(" %d", &colunas);

    D = (DADOS*)malloc(colunas * sizeof(DADOS));
    if (D == NULL)
    {
        printf("ERRO!! Memória não alocada\n");
        return 1;
    }
    if ((D = (DADOS*)malloc(colunas * sizeof(DADOS))) == NULL)
    {
        printf("ERRO!! Memória não alocada\n");
        return 1;
    }
    else{
        
        for (i = 0; i < linhas; i++)
        {
            for (int j = 0; j < colunas; j++)
            {
                printf("Digite o número:");
                scanf("%i",&D->chave);
            }
        }
    }
    
}