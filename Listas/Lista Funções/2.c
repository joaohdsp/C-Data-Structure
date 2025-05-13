//2) Assinale a alternativa correta. Ao executar o programa a seguir, qual será o resultado apresentado
//no printf “Valor de X: ” em tela?

#include <stdlib.h>
#include <stdio.h>

void multiplicar(int *Parametro){
 int resultado;
 resultado = *Parametro * 10;
 *Parametro = 1000;
 printf("Resultado da multiplicação é: %d", resultado);
 printf("Parametro: %d", *Parametro);
}

int main(){
 int x = 30;
 multiplicar(&x);
 printf("Valor de X: %d\n", x);
} 

//b) 1000