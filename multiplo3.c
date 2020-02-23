#include <stdlib.h>
#include <stdio.h>

int main (){
    int indice;

    for(indice=1;indice<100;indice++){
        if(indice%3==0){
            printf("%d \n", indice);
        }

    }

    return 0;
}