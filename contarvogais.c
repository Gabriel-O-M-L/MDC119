#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int conta_vogais(char *ptr){

    int quantidade = 0;
    while (*ptr != '\0'){
        if(strchr("AaEeIiOoUu",*ptr)){
            quantidade++;       
        }
    ptr++;
    }
    return quantidade;
}

int main (){
    char frase[50];
    printf("digite a frase \n");
    fflush(stdin);
    gets(frase);
    printf("%d vogais\n", conta_vogais(frase));
}