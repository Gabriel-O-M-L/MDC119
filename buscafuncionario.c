#include <stdio.h>
#include <stdlib.h>

int main (){
    //coluna 1= matricula, segunda coluna = telefone
    int funcionario[7][2] = {{1111,30001000},{2222,30002000},{3333,30003000},{4444,30004000},{5555,30005000},{6666,30006000},{7777,30007000}};
    int matricula;
    int indice;

    printf("digite a variavel matricula \n");
    scanf("%d", &matricula);

    for(indice=0;indice<7;indice++){
         if(matricula==*funcionario[0]){
             printf("%d \n",funcionario[1][1]);
             break;
         }
         else if (matricula == *funcionario[indice])
         {
             printf("%d %d /n", funcionario[indice],funcionario[indice][indice]);
         }

    }
    system("pause");
    return 0;
}