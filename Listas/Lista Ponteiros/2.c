/*
Exercício 2: Escreva um programa para criar e manipular uma matriz dinâmica de
inteiros, usando ponteiros duplos. O programa deve solicitar as dimensões da matriz,
preencher a matriz com valores inseridos pelo usuário, e imprimir a matriz.
Dicas:
1. Use um ponteiro duplo para criar uma matriz m x n.
2. Aloque memória para as linhas e colunas da matriz.
3. Use ponteiros para acessar e preencher os valores na matriz.
*/

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