#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores
lidos juntamente com o maior, o menor e a media dos valores. 
*/

int main()
{
    int qtdDeVetores;
    int vetValores[qtdDeVetores];
    int maiorValor;
    int menorValor;
    int somaValores;
    int mediaGeral;

    printf("Digite a Quantidade de Valores: \n");
    scanf("%d", &qtdDeVetores);

    for (int i = 1; i <= qtdDeVetores; i++)
    {
        printf("Digite o %d numero: \n", i);
        scanf("%d", &vetValores[i]);
    }

    maiorValor = vetValores[0];
    for (int i = 1; i <= qtdDeVetores; i++)
    {
        if (vetValores[i] > maiorValor)
        {
            maiorValor = vetValores[i];
        }
    }
    menorValor = vetValores[0];
    for (int i = 1; i <= qtdDeVetores; i++)
    {
        if (vetValores[i] < menorValor)
        {
            menorValor = vetValores[i];
        }
    }
    for (int i = 1; i <= qtdDeVetores; i++)
    {
        printf("%d valor é: %d \n", i, vetValores[1]);
    }
    printf("O menor valor digitado foi: %d \n", menorValor);
    printf("O maior valor digitado foi: %d \n", maiorValor);

    return 0;
}