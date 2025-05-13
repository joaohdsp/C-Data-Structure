#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct No {
    char caractere;
    struct No *prox;
} No;

No* empilhar(No *topo, char caractere) {
    No *novo = malloc(sizeof(No));
    novo->caractere = caractere;
    novo->prox = topo;
    return novo;
}

No* desempilhar(No *topo, char *caractere) {
    if (topo == NULL) return NULL;
    *caractere = topo->caractere;
    No *temp = topo;
    topo = topo->prox;
    free(temp);
    return topo;
}

void inverterStringEVerificarPalindromo(char *str) {
    No *pilha = NULL;
    int len = strlen(str);
    char normal[100], invertida[100];
    int j = 0;

    // Empilha apenas letras
    for (int i = 0; i < len; i++) {
        if (isalpha(str[i])) {
            char c = tolower(str[i]);
            normal[j++] = c;
            pilha = empilhar(pilha, c);
        }
    }
    normal[j] = '\0';

    // Desempilha e forma string invertida
    int i = 0;
    char temp;
    while (pilha != NULL) {
        pilha = desempilhar(pilha, &temp);
        invertida[i++] = temp;
    }
    invertida[i] = '\0';

    printf("String invertida: %s\n", invertida);
    if (strcmp(normal, invertida) == 0)
        printf("É um palíndromo.\n");
    else
        printf("Não é um palíndromo.\n");
}

int main() {
    char entrada[100];
    printf("Digite uma string: ");
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = 0;  // Remove o '\n'
    inverterStringEVerificarPalindromo(entrada);
    return 0;
}
