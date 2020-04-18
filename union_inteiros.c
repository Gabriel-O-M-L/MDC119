#include <stdio.h>
#include <stdlib.h>

 union u_numeros_inteiros{
        char caracter;
        short int inteiro_curto;
        int inteiro;
        long int inteiro_longo;
    }u_numeros_inteiros;   


int main (){
    union u_numeros_inteiros numero;

    numero.caracter = 'G';
    printf("%c \n",numero.caracter);

    numero.inteiro_curto = 52;
    printf("%hi \n" , numero.inteiro_curto);

    numero.inteiro = 53;
    printf("%d \n", numero.inteiro);

    numero.inteiro_longo = NULL;
    numero.inteiro_longo = 1000000000;
    printf("%li \n", numero.inteiro_longo);

    printf("denovo \n");
    printf("%c \n",numero.caracter);
    printf("%hi \n" , numero.inteiro_curto);
    printf("%d \n", numero.inteiro);
    printf("%li \n", numero.inteiro_longo);

    

















}