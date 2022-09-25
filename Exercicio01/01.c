#include <stdio.h>

int main()
{
    int n, s=1, resultado, i=0;
    
    printf("\nDigite um número inteiro positivo: ");
    scanf ("%i" , &n);
    
    while(n > 0 && s <= n){
        resultado = s * i;
        printf("%i X %i = %i \n" , s, i, resultado);
        i++;
        
       if(i == 11){
        i = 0;
        s ++;
        printf ("\n");
        }
    }
    
    return 0;
}