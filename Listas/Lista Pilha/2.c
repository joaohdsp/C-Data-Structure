#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int bit;
    struct No *prox;
} No;

No* empilhar(No *topo, int bit) {
    No *novo = malloc(sizeof(No));
    novo->bit = bit;
    novo->prox = topo;
    return novo;
}

No* desempilhar(No *topo) {
    No *temp = topo;
    topo = topo->prox;
    free(temp);
    return topo;
}

void converterParaBinario(int numero) {
    No *pilha = NULL;
    if (numero == 0) {
        printf("0");
        return;
    }
    while (numero > 0) {
        pilha = empilhar(pilha, numero % 2);
        numero /= 2;
    }

    printf("Binario: ");
    while (pilha != NULL) {
        printf("%d", pilha->bit);
        pilha = desempilhar(pilha);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um numero decimal: ");
    scanf("%d", &numero);
    converterParaBinario(numero);
    return 0;
}
