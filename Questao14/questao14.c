#include <stdio.h>
#include <stdlib.h>

/*
Escrever um programa que cadastre vários produtos. Em seguida, imprima
uma lista com o código de cada produto. Por último, consulte o preço de um
produto através de seu código
*/

struct produtosStruct
{
    char nomeProduto[100];
    long long codigoProduto;
};

#define qtdProdutos 5

void cadastroDeProdutos(struct produtosStruct produtos[])
{
    printf("---- Cadastro de Produtos ----\n");
    for (int i = 1; (i <= qtdProdutos); i++)
    {
        printf("\n Digite o nome do Produto(%i): \n", i);
        scanf("%s", produtos[i].nomeProduto);
        printf("\n Digite o Código do Produto(%i): \n", i);
        scanf("%lld", &produtos[i].codigoProduto);
    }
    getchar();
}

void localizarProdutos(struct produtosStruct produtos[])
{
    printf("\n\n ------ Buscar Produto ------ \n");
    printf("\nInforme o Código do Produto: ");
    long long localizarProdutos;
    scanf("%lld", &localizarProdutos); // 1

    for (int i = 0; (i < qtdProdutos); i++)
    { //2
        if (localizarProdutos == produtos[i].codigoProduto)
        {
            printf("Nome do Produto: %s\t\nCódigo do Produto: %lld\n", produtos[i].nomeProduto, produtos[i].codigoProduto);
            break;
        }
    }
}
int main()
{
    struct produtosStruct produtos[qtdProdutos];
    cadastroDeProdutos(produtos);
    localizarProdutos(produtos);

    getchar();
    return 0;
}
