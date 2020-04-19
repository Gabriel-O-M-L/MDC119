#include "vetores.h"
#include <stdlib.h>
#include <stdio.h>

int tamanho(int *ptr){
    int tam = 0;
    for(int i = 0;i<10;i++){
        if(*ptr){
        tam++;
    }
    ptr++;
    return tam;
    }
}
void imprimir(int *ptr){
    while(*ptr){
        printf("%d", *ptr);
    }
}
void inverter(int *ptr){
    int aux;
    int tam = tamanho(ptr);
    for(int i = 0;i<tam;i++){
                int aux = ptr[tam-i-1];
                ptr[tam-i-1] = ptr[i];
                ptr[i] = aux;
    }
}
void ordenar(int *ptr){
    int aux;
    for(int i;i<10;i++){
        for(int j = i;j<10;j++){
            if(ptr[i]>ptr[j]){
                int aux = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = aux;
            }
        }
    }
}
