#include <stdio.h>
#include <stdlib.h>

union u_produto{
    char nome[30];
    float preco;
    float volume;
    float peso;
}u_produto;

struct s_produto{
    char nome[30];
    float preco;
    float volume;
    float peso;

}s_produto;

struct s_item{
    char nome[30];
    float preco;
    union mesma_memoria{
        float volume;
        float peso;
    }mesma_memoria;
}s_item;

int main (){
    union u_produto produto1;
    struct s_produto produto2;
    
    produto1.nome[30] = "mich";
    produto2.nome[30] = "luck";
    produto1.peso = 60;
    produto2.peso = 50;
    produto1.preco = 22;
    produto2.preco = 20;
    produto1.volume = 80;
    produto2.volume = 90;


    printf("%d \n", sizeof(produto1));
    printf("%d \n", sizeof(produto2));

    struct s_item produto3;
    struct s_item produto4;

    produto3.nome[30] = 'jose';
    produto4.nome[30] = 'raimundo';
    produto3.preco = 50;
    produto4.preco = 40;
    produto3.mesma_memoria.peso = 50;
    produto4.mesma_memoria.volume = 40;

    printf("%d \n", sizeof(produto3));
    printf("%d \n", sizeof(produto4)); 
}

