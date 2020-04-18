#include <stdlib.h>
#include <stdio.h>

struct s_aluno{
    int matricula;
    char nome[30];
    float media;
}s_aluno;

int main (){
    struct s_aluno aluno;
    struct s_aluno *ptr = &aluno;

    aluno.matricula = 123;
    aluno.media = 8;
    aluno.nome[30] = 'rafael';

    printf("%d\n", ptr->matricula); 
    printf("%f\n", ptr->media);
    printf("%c\n", ptr->nome);

}