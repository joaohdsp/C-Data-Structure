#include <stdio.h>
#include <stdlib.h>
/*
Exercício 1: Crie um programa que solicite ao usuário um número n de inteiros e
armazene esses valores em um vetor. Use um ponteiro simples para calcular a soma
dos elementos no vetor e exiba o resultado.
Dicas:
1. Peça ao usuário a quantidade de elementos.
2. Aloque dinamicamente o vetor usando ponteiros.
3. Use um ponteiro para percorrer o vetor e calcular a soma dos elementos.

void somador(int *Parametro, int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += *(Parametro + i); 
    }

    printf("A soma dos elementos do vetor é: %d\n", soma);
}

int main() {
    int q;

    printf("Quantos elementos você quer no vetor?\n");
    scanf("%i", &q);

    // Alocação dinâmica
    // Tem a mesma função que vetor[q] teria
    int *vetor = (int *)malloc(q * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Preenchimento do vetor
    for (int i = 0; i < q; i++) {
        printf("Informe o valor para a posição %d: ", i);
        scanf("%i", &vetor[i]);
    }

    // Chamada da função
    somador(vetor, q);

    free(vetor); // libera a memória alocada
    return 0;
}

typedef struct DADOS {
    int valor;
} DADOS;

int main() {
    int i, j, m, n;
    DADOS **matriz;

    // Solicita dimensões da matriz
    printf("Informe o número de linhas da matriz: ");
    scanf("%d", &m);

    printf("Informe o número de colunas da matriz: ");
    scanf("%d", &n);

    // Alocação das linhas (ponteiro para ponteiros)
    matriz = (DADOS **)malloc(m * sizeof(DADOS *));
    if (matriz == NULL) {
        printf("Erro ao alocar as linhas.\n");
        return 1;
    }

    // Alocação das colunas para cada linha
    for (i = 0; i < m; i++) {
        matriz[i] = (DADOS *)malloc(n * sizeof(DADOS));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar colunas da linha %d.\n", i);
            return 1;
        }
    }

    // Preenchendo a matriz
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j].valor);
        }
    }

    // Imprimindo a matriz
    printf("\nMatriz:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matriz[i][j].valor);
        }
        printf("\n");
    }

    // Liberar memória
    for (i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
void alteraValor(int **Parametro){
    *Parametro = (int *)malloc(sizeof(int)); // aloca memória para 1 inteiro

    if (*Parametro == NULL) {
        printf("Erro ao alocar memória.\n");
        return;
    }

    printf("Me informe o valor do inteiro: ");
    scanf("%d", *Parametro); // lê o valor e armazena na área alocada

    // Não precisa de return 0 em funções void
}

int main (){
    int *valor = NULL;
    
    alteraValor(&valor);

    if (valor != NULL) {
        printf("O valor é = %d\n", *valor);
        free(valor); // libera a memória alocada
    }

    return 0;
}
*/

