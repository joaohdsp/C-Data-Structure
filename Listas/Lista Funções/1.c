//1) Faça um programa em que uma estrutura heterogênea será armazenada dentro de uma matriz de
//2 x 2. A estrutura heterogênea deverá ter apenas 1 dado interno
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