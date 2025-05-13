#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pessoa.h"

void menu() {
    Pessoa *lista = NULL;
    int opcao;
    char nome[50];

    do {
        printf("\n1 - Cadastrar\n2 - Apagar\n3 - Buscar\n4 - Mostrar\n0 - Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lista = cadastrar(lista);
                break;
            case 2:
                printf("Informe o nome da pessoa a apagar: ");
                scanf(" %[^\n]", nome);
                lista = apagar(lista, nome);
                break;
            case 3: {
                printf("Informe o nome da pessoa a buscar: ");
                scanf(" %[^\n]", nome);
                Pessoa *p = buscar(lista, nome);
                if (p)
                    printf("Pessoa encontrada: %s | Idade: %d\n", p->nome, p->idade);
                else
                    printf("Pessoa não encontrada.\n");
                break;
            }
            case 4:
                mostrar(lista);
                break;
            case 0:
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);
}
