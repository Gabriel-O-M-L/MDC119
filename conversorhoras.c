#include <stdio.h>
#include <stdlib.h>

int main (){

    int segundos = 300;
    int horas = (segundos/3600);
    segundos = (segundos%3600);
    int minutos = (segundos/60);
    segundos = segundos/60;

    printf("o horario e : %d:%d:%d", horas,minutos,segundos);

    return 0;

}