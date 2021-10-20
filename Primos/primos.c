#include <stdio.h>
int main()
{
    printf("Bem-vindo a calculadora de números primos!\n\n");
    int numero, i;
    int flag = 0; 
    printf("Digite um número positivo para verificar se é primo ou não:\n");
    scanf("%d", &numero);
    for(i = 2; i <= numero/2; i++)
        {
        if(numero%i == 0) // Condição para não primo
            {
            flag = 1; // Para indicar que não é primo
            break;
            }
        }
    if (numero == 1)
        {
        printf("1 não é um número primo.\n");
        }
    else
        {
        if (flag == 0)
            printf("%d é primo.\n", numero);
        else
            printf("%d não é primo.\n", numero);
        }
    return 0;
}