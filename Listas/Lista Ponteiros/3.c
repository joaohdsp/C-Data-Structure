/*
Exercício 3: Crie um programa que contenha uma função chamada alteraValor que
receba um ponteiro duplo para um inteiro. A função deve modificar o valor do inteiro
para um valor inserido pelo usuário.
Dicas:
1. Defina uma função alteraValor que receba um int**.
2. Dentro da função, modifique o valor do inteiro apontado pelo ponteiro duplo.
*/

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