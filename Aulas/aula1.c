#include <stdio.h>
#include <stdlib.h>

typedef struct DADOS{
        int chave;
        char nome[50];
};


void lbt(){
    int c = 0;
    while( (getchar() != '\n') && c != EOF){}
}


int main ()
{
    struct DADOS dados[3];
    // DADOS é o nome do tipo da struct, definido antes como typedef struct DADOS...
    // dados (minúsculo) é o nome da variável, ou seja, o array de 3 structs.
    int ind;
    int *b, *m;
    float *num;
    
    printf("%d Bytes\n", sizeof(ind));

    for (ind= 0; ind<3; ind++){
        printf("Informe um valor para chave: ");
        scanf("%i", &dados[ind].chave);
        //scanf acessa o campo "chave" da variável dados de posição [ind] no vetor,
        //ou seja, se ind for 1, dados de posição 1 no vetor.
        lbt();
        printf("Informe um nome: ");
        scanf("%s", &dados[ind].nome);
        lbt();
    }
    
}