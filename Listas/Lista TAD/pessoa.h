#ifndef PESSOA_H
#define PESSOA_H

typedef struct Pessoa {
    char nome[50];
    int idade;
    struct Pessoa *prox;
} Pessoa;

Pessoa* cadastrar(Pessoa *inicio);
Pessoa* apagar(Pessoa *inicio, char nome[]);
Pessoa* buscar(Pessoa *inicio, char nome[]);
void mostrar(Pessoa *inicio);

#endif
