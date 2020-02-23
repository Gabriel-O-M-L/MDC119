#include <stdio.h>
#include <stdlib.h>

int main (){

    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int indice;
    for (indice=0;indice<10;indice++){
        printf("indice na posicao %d e igual a :%d\n", indice,array[indice]);    
    }
    printf("\n \n");
    for(indice=9;indice>(-1);indice--){
        printf("o indice na posicao %d e :%d\n", indice,array[indice]);
    }
return 0;
}