#include "calculadora.h"
#include <stdlib.h>

int somar(int a ,int b);
int somar(int a,int b){
    return (a+b);
}
int subtrair(int a, int b){
    return (a-b);
}
int multiplicar(int a,int b){
    return (a*b);
}
int dividir (int a,int b){
    if(b != 0){
    float resultado = (a/b);
    return resultado;}
    else
    return 0;
}
