#include <stdio.h>
#include <stdlib.h>

int is_bissexto(int i){

    if ((i%4==0 && i%100 != 0) || i%400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){

    int ano;
    scanf("%d", &ano);

    if(is_bissexto(ano) == 1){
        printf("ano e bissexto \n");    
    }
    else
    {
        printf("ano nao e bissexto \n");
    }
    
}


