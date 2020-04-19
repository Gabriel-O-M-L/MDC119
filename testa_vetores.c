
#include "vetores.h"
#include <stdlib.h>
#include <stdio.h>

int main (){
    int vetor[10];
    int tam;
    printf("digites os valore do vetor");
    for(int i = 0;i<10;i++){
        scanf("%d", &vetor[i]);
    }
    tam = tamanho(vetor);
    printf( "\n%d\n", tam);
    printf("o vetor apos inverter :");
    inverter(vetor);

    for( int i = 0;i<tam;i++){
        printf("%d", vetor[i]);
    }
    printf("\no valor apos ordenar :");
    ordenar(vetor);
    for(int i = 0;i<tam;i++){
        printf("%d", vetor[i]);
    }
}
