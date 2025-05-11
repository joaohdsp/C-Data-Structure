/*
1) Faça um programa em que uma estrutura heterogênea será armazenada dentro de uma matriz de
2 x 2. A estrutura heterogênea deverá ter apenas 1 dado interno
*/

typedef struct {
    int valor;
}DADOS;

int main(){

    DADOS matriz[2][2];
    
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
           printf("Digite um valor para matriz[%d][%d]: ", i, j);
           scanf("%d", &matriz[i][j].valor);
        }
    }
    
    printf("\nValores armazenados:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j].valor);
        }
    }

    return 0;

}
