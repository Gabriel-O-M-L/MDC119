#include <stdio.h>
#include <stdlib.h>

int main(){
    //coluna 1=nota1,coluna 2 = nota2, coluna 3 = media
    int indice;
    double notas[10][3];

    for ( indice = 0; indice < 10; indice++)
    {
        printf("digite a nota 1 e a nota 2 respectivamente\n");
        scanf("%lf", notas[indice]);
        scanf("%lf", notas[indice][indice]);
        notas[indice][indice][indice] = ((notas[indice] + notas[indice][indice]])/2);
    }
    for ( indice = 0; indice < 10; indice++)
    {
        printf("%.2lf \n", *notas[indice][indice][indice]);
    }
    
return 0;
}