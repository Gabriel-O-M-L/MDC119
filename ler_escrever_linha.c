#include <stdio.h>
#include <string.h>

void main()
{
    FILE* arq;
    char matricula[10];
    char nome[30];
    char texto[50];

    arq = fopen("alunos.txt", "w");

    if (arq == NULL)
    {
        printf("Erro ao criar o arquivo\n");
        return;
    }

    memset(matricula, sizeof(matricula), 0);
    printf("matricula = ");
    scanf("%s", matricula);
    getchar();

    while (strcmp(matricula, "0"))
    {
       
        memset(nome, sizeof(nome), 0);
        printf("nome = ");
        scanf("%s", nome);
        getchar();

        fputs(matricula,arq);
        fputs(nome,arq);

        memset(matricula, sizeof(matricula), 0);
        printf("matricula = ");
        scanf("%s", matricula);
        getchar();  

    }

    fclose(arq);

    arq = fopen("alunos.txt", "r");

    fgets(matricula,10,arq);

    while (!feof(arq))
    {
        fgets(nome,30,arq);
        printf("%s - %s\n", matricula, nome);
        fgets(matricula,10,arq);
    }

    fclose(arq);

    return;
}