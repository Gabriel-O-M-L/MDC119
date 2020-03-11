#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct funcionario_t
{
    char nome[50],
        double salario,
        char admissao[10],
} funcionarios[100], funcionario;

void main()
{

    int total;
    struct funcionario_t funcionarios[100];
    struct funcionarios_t funcionario;

    for (;;)
    {

        scanf("%s", funcionario.nome);
        scanf("%lf", funcionario.salario);
        scanf("%s", funcionario.admissao);

        funcionarios[total] = funcionario;
        total++;

        if(!strcmp(funcionarios.nome == "0")){
            break;
    }

    for(int i =0;i<total; i++){
            printf("%s, %.2lf, %s", funcionario.nome, funcionario.sario, funcionario.admissao)

    }
    }