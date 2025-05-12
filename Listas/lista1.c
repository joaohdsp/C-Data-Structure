/*
1) Faça um programa em que uma estrutura heterogênea será armazenada dentro de uma matriz de
2 x 2. A estrutura heterogênea deverá ter apenas 1 dado interno

#include <stdio.h>

typedef struct {
    int valor;
    char carac;
} DADOS;

int main() {
    DADOS matriz[2][2];

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite um valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j].valor);
            printf("Digite um caractere para matriz[%d][%d]: ", i, j);

            scanf(" %c", &matriz[i][j].carac);
        }
    }

    
    printf("\nValores armazenados:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz[%d][%d] = Valor: %d, Caractere: %c\n", i, j, matriz[i][j].valor, matriz[i][j].carac);
        }
    }

    return 0;
}

2) Assinale a alternativa correta. Ao executar o programa a seguir, qual será o resultado apresentado
no printf “Valor de X: ” em tela?

#include <stdlib.h>
#include <stdio.h>
void multiplicar(int *Parametro){
 int resultado;
 resultado = *Parametro * 10;
 *Parametro = 1000;
 printf(“Resultado da multiplicação: %d\n”, resultado);
 printf(“Paramentro: %d\n”, *Parametro);
}
int main(){
 int x = 30;
 multiplicar(&x);
 printf(“Valor de X: %d\n”, x);
} // Fim da Função Principal (main)

b) 1000
*/

//NÚMERO 3:

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


