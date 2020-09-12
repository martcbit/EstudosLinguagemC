#include <stdlib.h>
#include <stdio.h>

/*
Faça um programa que preencha um vetor com 10 números reais, calcule e
mostre a quantidade de números negativos e a soma dos números positivos
desse vetor. 
*/

int main()
{
    int vetNumrsReais[10];
    int somaNumPositivos = 0;
    int qtdNegativos = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o %d numero: \t", i);
        scanf("%d", &vetNumrsReais[i]);
        if (vetNumrsReais[i] >= 0)
        {
            somaNumPositivos += vetNumrsReais[i];
        }
        else if (vetNumrsReais[i] < 0)
        {
            qtdNegativos += 1;
        }
    }

    printf("\n\nA quantidade de Numero Negativos é: %d \n A soma dos numeros positivos é: %d.\n\n", qtdNegativos, somaNumPositivos);

    return 0;
}