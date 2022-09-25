#include <stdio.h>

int main()
{
    int n, i=0;
    
    printf("Digite um número para iniciar a contagem regressiva: ");
    scanf ("%i" , &n);
    
    while(n >= i){
        printf("%i\n", n);
        n--;
    }

    return 0;
    
}