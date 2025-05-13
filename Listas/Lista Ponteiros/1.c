/*
Exercício 1: Crie um programa que solicite ao usuário um número n de inteiros e
armazene esses valores em um vetor. Use um ponteiro simples para calcular a soma
dos elementos no vetor e exiba o resultado.
Dicas:
1. Peça ao usuário a quantidade de elementos.
2. Aloque dinamicamente o vetor usando ponteiros.
3. Use um ponteiro para percorrer o vetor e calcular a soma dos elementos.
*/

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