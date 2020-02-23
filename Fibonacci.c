#include <stdlib.h>
#include <stdio.h>

//Professor esta ecutando muito TOOL

int main (){

    int anterior;
    int proximo = 1;
    int numero = 0;
    int i;

    for (i = 0;i<10;i++)
    {
        printf("numero: %d \n", numero);
        anterior = proximo;
        proximo = proximo + numero;
        numero = anterior;
    }
    

    return 0;
}