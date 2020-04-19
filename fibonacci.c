#include <stdlib.h>
#include <stdio.h>

int fibonacci(int n){
    if(n>2){
        return (fibonacci(n-1)+fibonacci(n-2));
    }
    else
    {
        return 1;
    }
}
int main (){

    int n;
    printf("digite o valor de n\n");
    scanf("%d", &n);
    for(int i  = 0;i<n;i++){
        printf("Fibonacci %d \n", fibonacci(i+1));
        fibonacci(n);
    }

}