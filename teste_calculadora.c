#include "calculadora.h"
#include <stdio.h>

int main (){

    int a = 0;
    int b = 0;
    printf("digite a e b respectivamente  \n");
    scanf("%d", &a);
    scanf("%d", &b);

    printf("soma :%d \n", somar(a,b));
    printf("subtracao :%d \n", subtrair(a,b));
    printf("multiplicacao :%d \n", multiplicar(a,b));
    printf("divissao : %d \n",  dividir(a,b));
}
