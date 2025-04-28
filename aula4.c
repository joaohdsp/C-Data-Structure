#include <stdio.h>

int fatorial(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main (){
    int numero;
    printf("Informe um valor inteiro:");
    scanf("%d", &numero);
    int fat = 1, aux = numero;
    while (aux > 0){
        fat *= aux;
        aux--;
    }
    printf("Fatorial do número: %d é %d\n\n", numero, fat);

    printf("Fatorial do número:%d é %d\n\n", numero, fatorial(numero));
}