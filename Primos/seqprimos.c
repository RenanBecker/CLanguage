#include <stdio.h>
int main()
{
    printf("Bem vindo a calculadora de sequencia de números primos\n\n");
    int limiteInferior, limiteSuperior, i;
    int flag; 
    printf("Entre com a sequencia:\n");
    printf("Limite inferior: ");
    scanf("%d",&limiteInferior);
    printf("Limite superior: ");
    scanf("%d",&limiteSuperior);
    printf("Os númerios que estão na sequencia (%d,%d) são:\n", limiteInferior, limiteSuperior);
    while (limiteInferior < limiteSuperior)
    {
        flag = 0;
        for(i = 2; i <= limiteInferior/2; i++)
        {
            if(limiteInferior % i == 0)
            {
                flag = 1; // Não primo
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", limiteInferior);
        }
        limiteInferior++;
    }
    printf("\n");
return 0;
}