#include <stdio.h>
int main()
{
printf("Bem vindo a calculadora de Fibonacci\n\n");
int termo1 = 0, termo2 = 1, proximoTermo = 0, limit;
printf("Digite o numero de Fibonacci que deseja calcular: ");
scanf("%d", &limit);
printf("O numero de Fibonacci %d é: %d, %d, ",limit, termo1, termo2); // term1 = 0 and term2 = 1
proximoTermo = termo1 + termo2;
while(proximoTermo <= limit)
{
printf("%d ",proximoTermo);
termo1 = termo2;
termo2 = proximoTermo;
proximoTermo = termo1 + termo2;
}
printf("\n");
return 0;
}