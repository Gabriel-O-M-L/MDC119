#include <stdio.h>
#include <stdlib.h>

int main () {

    int ano;

    printf("digite o ano");
    scanf("%d", &ano);

    if ((ano%4==0 && ano%100 != 0) || ano%400 == 0)
    {
        printf("ano e bissexto");
    }
    else
    {
        printf("ano nao e bissexto");
    }
    
    return 0;
}