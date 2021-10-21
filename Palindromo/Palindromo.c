#include <stdio.h>
int main()
{
    printf("Bem vindo a calculadora de números Palíndrimos\n\n");
    int number, number_reverse = 0, remainder, original_number;
    printf("Digite um número: ");
    scanf("%d", &number);
    original_number = number; // Passando para variavel de trabalho
    /* Invertendo o número */
    while( number!=0 )
    {
        remainder = number % 10;
        number_reverse = number_reverse * 10 + remainder;
        number /= 10;
    }
    // Checando se o número original é igual ao número invertido
    if (original_number == number_reverse)
    printf("%d é palíndrimo.\n", original_number);
    else
    printf("%d não é palímdrimo.\n", original_number);
    return 0;
}