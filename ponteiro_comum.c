#include <stdlib.h>
#include <stdio.h>

int main (){
    int x;
    int *ptr;

    printf("%p \n", &ptr);

    x = 5;
    ptr = &x;

    printf("%d \n%p \n", x,ptr);

    ptr = 10;

    printf("%d \n%p", x,ptr);

}