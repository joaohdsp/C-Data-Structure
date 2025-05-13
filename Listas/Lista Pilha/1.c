#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    char simbolo;
    struct No *prox;
} No;

No* empilhar(No *topo, char simbolo) {
    No *novo = malloc(sizeof(No));
    novo->simbolo = simbolo;
    novo->prox = topo;
    return novo;
}

No* desempilhar(No *topo) {
    if (topo == NULL) return NULL;
    No *temp = topo;
    topo = topo->prox;
    free(temp);
    return topo;
}

char topoSimbolo(No *topo) {
    return topo ? topo->simbolo : '\0';
}

int combinam(char abertura, char fechamento) {
    return (abertura == '(' && fechamento == ')') ||
           (abertura == '{' && fechamento == '}') ||
           (abertura == '[' && fechamento == ']');
}

int estaBalanceado(const char *expr) {
    No *pilha = NULL;
    for (int i = 0; expr[i] != '\0'; i++) {
        char c = expr[i];
        if (c == '(' || c == '[' || c == '{') {
            pilha = empilhar(pilha, c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (pilha == NULL || !combinam(topoSimbolo(pilha), c)) {
                return 0;
            }
            pilha = desempilhar(pilha);
        }
    }
    return pilha == NULL;
}

int main() {
    char expressao[200];
    printf("Digite a expressao: ");
    fgets(expressao, sizeof(expressao), stdin);

    if (estaBalanceado(expressao))
        printf("Expressao balanceada.\n");
    else
        printf("Expressao desbalanceada.\n");

    return 0;
}
