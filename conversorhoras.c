#include <stdlib.h>
#include <stdio.h>

int converte_hhmmss_em_segundos(int h, int m , int s){
    int segundos_total = 0;

    segundos_total=((h*60)*60);
    segundos_total = segundos_total + (m*60);
    segundos_total = segundos_total + s;
    return segundos_total;

}

int main (){
    int horas;
    int minutos;
    int segundos;

    printf("escreva em ordem horas,minutos e segundos \n");
    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    printf("%d", converte_hhmmss_em_segundos(horas,minutos,segundos));
}