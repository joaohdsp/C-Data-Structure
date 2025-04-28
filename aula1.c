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
    int ind;
    int *b, *m;
    float *num;
    
    printf("%d Bytes\n", sizeof(ind));

    for (ind= 0; ind<3; ind++){
        printf("Informe um valor para chave: ");
        scanf("%i", &dados[ind].chave);
        lbt();
        printf("Informe um nome: ");
        scanf("%i", &dados[ind].nome);
    }
    
}