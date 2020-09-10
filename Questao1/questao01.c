#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int qtdVetores = 6;
    int vetores[6];

    for (int i = 0; i < qtdVetores; i++)
    {
        printf("Digite um numero Inteiro: \n");
        scanf("%d", &vetores[i]);
    }
    for (int i = 0; i < qtdVetores; i++)
    {
        printf("Os vetores são: %d \n", vetores[i]);
    }
}