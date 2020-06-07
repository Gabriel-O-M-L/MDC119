#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE* arq;

    arq = fopen("dados.bin","rb+");
    if(arq == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }

    printf("Precione qualquer tecla para continuar");
    getchar();




}