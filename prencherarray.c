#include <stdlib.h>
#include <stdio.h>

int main(){

    int array[10];
    int indice;

    for(indice=0;indice<10;indice++){
        printf("Preencha o array na posicao %d \n", indice);
        scanf("%d", &array[indice]);
      
    }
    for(indice=0;indice<10;indice++){
        printf("o valor no indice %d e :%d \n", indice,array[indice]);
    }
system("pause");
return 0;
}