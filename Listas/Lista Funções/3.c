/*
3) Declare uma estrutura heterogênea que tenha duas variáveis, sendo elas: um vetor de inteiros e
uma cadeia de caracteres. Declare uma variável do tipo ponteiro para a estrutura com tamanho 5.
a. Faça a inclusão dos dados para o vetor inteiro da estrutura heterogênea.
b. Faça a alteração de apenas UM dos dados do vetor de inteiros de apenas UMA célula
do vetor da estrutura heterogênea.
c. Apague os dados apenas a célula 3 do vetor da estrutura heterogênea.
d. Apresente o vetor completo:
i. Após preencher todo o vetor
ii. Após mudar um dado de uma das células
iii. Após apagar uma célula
*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int valor[5];    // vetor de inteiros
    char cadeia[50]; // cadeia de caracteres (aumentei o tamanho para caber textos maiores)
} DADOS;

int main() {
    DADOS *variavel = (DADOS *)malloc(5 * sizeof(DADOS)); // ponteiro para 5 structs

    // a) Preenchendo os dados
    for (int i = 0; i < 5; i++) {
        printf("Preenchendo a célula %d:\n", i);

        for (int j = 0; j < 5; j++) {
            printf("  valor[%d]: ", j);
            scanf("%d", &variavel[i].valor[j]);
        }

        printf("  cadeia: ");
        scanf(" %[^\n]", variavel[i].cadeia); // ler string com espaços
    }

    // i. Mostrar o vetor completo após preenchimento
    printf("\n--- Após preenchimento ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Célula %d:\n", i);
        printf("  Valores: ");
        for (int j = 0; j < 5; j++) {
            printf("%d ", variavel[i].valor[j]);
        }
        printf("\n  Cadeia: %s\n", variavel[i].cadeia);
    }

    // b) Alterar apenas UM dos dados do vetor de inteiros de UMA célula
    variavel[2].valor[3] = 999;

    // ii. Mostrar o vetor após a alteração
    printf("\n--- Após alterar valor[3] da célula 2 ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Célula %d:\n", i);
        printf("  Valores: ");
        for (int j = 0; j < 5; j++) {
            printf("%d ", variavel[i].valor[j]);
        }
        printf("\n  Cadeia: %s\n", variavel[i].cadeia);
    }

    // c) Apagar os dados da célula 3 (índice 2)
    for (int j = 0; j < 5; j++) {
        variavel[3].valor[j] = 0;
    }
    strcpy(variavel[3].cadeia, "");

    // iii. Mostrar o vetor após apagar a célula 3
    printf("\n--- Após apagar a célula 3 ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Célula %d:\n", i);
        printf("  Valores: ");
        for (int j = 0; j < 5; j++) {
            printf("%d ", variavel[i].valor[j]);
        }
        printf("\n  Cadeia: %s\n", variavel[i].cadeia);
    }

    free(variavel); // libera a memória
    return 0;
}


