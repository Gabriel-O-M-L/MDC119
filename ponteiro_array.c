#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
    char string[30] = "Eu gosto de C!";
    char *p;
    
    p = string;

    while ( *p != '\0'){
        printf("%c", *p);
        p++;

    }

}