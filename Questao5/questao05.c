#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores
lidos juntamente com o maior, o menor e a media dos valores. 
*/

int main(void)
{
    int vetValores[5];
    int maiorValor;
    int menorValor;
    int somaValores;
    int mediaGeral;
    int pMaiorValor;
    int pMenorValor;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o %d numero: \n", i);
        scanf("%d", &vetValores[i]);
    }

    maiorValor = vetValores[1];
    for (int i = 0; i <= 5; i++)
    {
        if (vetValores[i] > maiorValor)
        {
            maiorValor = vetValores[i];
            pMaiorValor = i;
        }
    }
    menorValor = vetValores[1];
    for (int i = 1; i <= 5; i++)
    {
        if (vetValores[i] < menorValor)
        {
            menorValor = vetValores[i];
            pMenorValor = i;
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("%d valor é: %d \n", i, vetValores[i]);
    }
    printf("O menor valor digitado foi: %d \n", menorValor);
    printf("O menor valor se encontra na Posição [%d] \n", pMenorValor);
    printf("O maior valor digitado foi: %d \n", maiorValor);
    printf("O maior se encontra na posição [%d] \n", pMaiorValor);

    return 0;
}