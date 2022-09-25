#include <stdio.h>
    
    int main() {
        
      int dia, mes, ano, x, y, r;
          
        printf("Digite um dia: \n");
        scanf("%i",&dia);
        printf("Digite um mês: \n");
        scanf("%i",&mes);
        printf("Digite um ano: \n");
        scanf("%i",&ano);
                      
        x = (dia * 100 + mes) + ano;
        y = (x / 100) +(x % 100);
        r = y % 5;
                       
        if(r==0) 
            printf("Seu perfil é: Tímido!");
            
        else if(r==1)
            printf("Seu perfil é: Sonhador!");
            
        else if(r==2)
            printf("Seu perfil é: Paquerador!");
            
        else if(r==3)
            printf("Seu perfil é: Atraente");
            
        else if (r==4)
            printf("Seu perfil é: Irresistível");
        
    return 0;
    
}