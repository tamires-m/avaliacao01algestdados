#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    char nome[50], email[50], tel[15];
    
    printf("Digite um nome:");
    gets(nome);
    
    printf("Digite um email:");
    gets(email);
    
    printf("Digite um número de telefone:");
    gets(tel);
    
    printf("\n Nome = %zu\n",strlen(nome));
    printf("\n Email = %zu\n",strlen(email));
    printf("\n Telefone = %zu\n",strlen(tel));
    
    
    return 0;    
    
}