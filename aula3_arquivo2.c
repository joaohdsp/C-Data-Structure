//Fazendo a inclusão do arquivo Ponto.h
//Nele estão as bibliotecas comuns (cstdio, cstdlib e Math) e as
//implementações das funções chamadas aqui.
#include "Ponto.h"

int main(int argv, char** argc){
    int qtd, op, pos;
    Ponto* P;
    
    printf("Informe a quantidade de Coordenadas:");
    scanf("%d", &qtd);
    if ((P = (Ponto*)malloc(qtd * sizeof(Ponto))) == NULL){
        printf("Erro!! Memória não alocada˜˜\n");
        return 1;
    }
    
    for ( pos = 0; pos < qtd; pos++)
    {
        P[pos].x = NULO;
        P[pos].y = NULO;
    }
    pos = -1;
    do
    {
        system("cis");
        printf("***** MENU PRINCIPAL *****\n");
        printf("< 1 > Criar Coordenada\n");
        printf("< 2 > Apagar Coordenada\n");
        printf("< 3 > Calcular distância entre Coordenadas\n");
        printf("< 5 > Mostrar Situação do Vetor de Pontos\n");
        printf("< 6 > Sair do Programa\n");
        printf("Informe sua opção:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            criarPonto(P, qtd, &pos);
            break;
        case 2:
            if (pos < 0){
               printf("Vetor Inexistente!!!\n\n");
            }else{
                apagarPonto(P, qtd);
            }
            system("pause");
            break;
        default:
            break;
        }
    } while (condition);
    
}