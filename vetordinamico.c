#include <stdlib.h>
#include <stdio.h>

int *criar_vetor(int n){
    int *ptr;
    ptr = (int*)malloc(sizeof(int)*n);
    return ptr;
}
void ler_vetor(int *v, int n){
    printf("digite os numeros do vetor \n");
    for(int i = 0;i<n;i++){
        fflush(stdin);
        scanf("%d", &v[i]);
    }
}
void imprimir_vetor(int *v,int n){
    for(int i = 0;i<n;i++)
        printf("%d  ", v[i]);

}
void destruir_vetor(int *v){
    free(v);
    v = NULL;
}

int main(){
    int numero;
    int *vetor;
    printf("digite o numero \n");
    scanf("%d", &numero);
    
    vetor = criar_vetor(numero);
    ler_vetor(vetor,numero);
    imprimir_vetor(vetor,numero);
    destruir_vetor(vetor);
}