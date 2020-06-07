#include <stdlib.h>
#include <stdio.h>

int main(){

    FILE* arq;
    //arq = fopen("dados.txt","r");
    arq = fopen("dados.txt","w");

    if(arq==NULL){
        printf("erro ao abrir arquivo");
        return 1;
    }
     
    //fclose(arq);
    printf("pressiona qualquer tecla");
    getchar();






}