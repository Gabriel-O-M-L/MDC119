#include <stdio.h>
#include <string.h>

void main()
{
    FILE *arq;
    
    typedef struct 
    {
        char nome[30];
        char matricula[10];

    }aluno;

    char texto[50];
    aluno ptr;

    arq = fopen("alunos.dat", "w");

    if (arq == NULL)
    {
        printf("Erro ao criar o arquivo\n");
        return;
    }

    memset(ptr.matricula,0,sizeof(ptr.matricula));
    printf("matricula =  %s", ptr.matricula);
    scanf("%s", ptr.matricula);
    getchar();

    while (strcmp(ptr.matricula, "0"))
    {
       
        memset(ptr.nome,0,sizeof(ptr.nome));
        printf("nome = ");
        scanf("%s", ptr.nome);
        getchar();

        fwrite(&ptr,sizeof(aluno),1,arq);
        fwrite(&ptr,sizeof(aluno),1,arq);

        memset(ptr.matricula,0,sizeof(ptr.matricula));
        printf("matricula = ");
        scanf("%s", ptr.matricula);
        getchar();  

    }

    fclose(arq);

    arq = fopen("alunos.dat", "r");

    fread(&ptr.matricula,sizeof(aluno),1,arq);
    
    fseek(arq,SEEK_SET,0);
    
    while (!feof(arq))
    {
        fread(&ptr,sizeof(aluno),1,arq);
        printf("%s - %s\n", ptr.matricula, ptr.nome);
        fread(&ptr,sizeof(aluno),1,arq);
    }

    fclose(arq);

    return;
}

