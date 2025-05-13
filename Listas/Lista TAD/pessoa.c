#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pessoa.h"

Pessoa* cadastrar(Pessoa *inicio) {
    Pessoa *nova = (Pessoa*)malloc(sizeof(Pessoa));
    if (!nova) {
        printf("Erro de alocação.\n");
        return inicio;
    }

    printf("Informe o nome: ");
    scanf(" %[^\n]", nova->nome);
    printf("Informe a idade: ");
    scanf("%d", &nova->idade);
    nova->prox = inicio;
    return nova;
}

Pessoa* apagar(Pessoa *inicio, char nome[]) {
    Pessoa *atual = inicio;
    Pessoa *anterior = NULL;

    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0) {
            if (anterior == NULL)
                inicio = atual->prox;
            else
                anterior->prox = atual->prox;

            free(atual);
            printf("Pessoa apagada com sucesso.\n");
            return inicio;
        }
        anterior = atual;
        atual = atual->prox;
    }

    printf("Pessoa não encontrada.\n");
    return inicio;
}

Pessoa* buscar(Pessoa *inicio, char nome[]) {
    Pessoa *atual = inicio;

    while (atual != NULL) {
        if (strcmp(atual->nome, nome) == 0)
            return atual;
        atual = atual->prox;
    }

    return NULL;
}

void mostrar(Pessoa *inicio) {
    Pessoa *atual = inicio;
    printf("\n--- Lista de Pessoas ---\n");
    while (atual != NULL) {
        printf("Nome: %s | Idade: %d\n", atual->nome, atual->idade);
        atual = atual->prox;
    }
    printf("------------------------\n");
}
