#include <stdio.h>
#include <stdlib.h>

/*
Escrever um programa que cadastre a altura, o peso, o cpf e sexo de algumas pessoas. 
Com os dados cadastrados, em seguida localizar uma pessoas através do seu CPF 
e imprimir o seu IMC.
*/

struct pessoasStruct
{
    char nome[100];
    char sexo; // 'm': masculino, 'f': femino
    float peso;
    float altura;
    long long cpf;
};

#define qtdPessoas 3

void cadastroDePessoas(struct pessoasStruct pessoas[qtdPessoas])
{
    printf("---- Cadastro de Pessoa ----\n");
    for (int i = 1; (i <= qtdPessoas); i++)
    {
        printf("\nInforme o nome da pessoa(%i): \n", i);
        scanf("%s", pessoas[i].nome);
        printf("\nInforme a Altura da pessoa(%i): \n", i);
        scanf("%f", &pessoas[i].altura);
        printf("\nInforme o Peso da pessoa(%i): \n", i);
        scanf("%f", &pessoas[i].peso);
        printf("\nInforme o CPF da pessoa(%i): \n", i);
        scanf("%lld", &pessoas[i].cpf);
        printf("\nInforme o Sexo da pessoa(%i): \n", i);
        scanf("%c\n\n\n", &pessoas[i].sexo);
    }
    getchar();
}

void localizarPessoas(struct pessoasStruct pessoas[qtdPessoas])
{
    printf("\nInforme o CPF da pessoa: ");
    long long localizarCpf;
    scanf("%lld", &localizarCpf); // 1

    printf("\nSexo\tNome\tIMC");
    for (int i = 0; (i < qtdPessoas); i++)
    { //2
        if (localizarCpf == pessoas[i].cpf)
        { //3
            float imc = pessoas[i].peso / (pessoas[i].altura *
                                           pessoas[i].altura);
            printf("\n%c\t%s\t%1.2f\n", pessoas[i].sexo,
                   pessoas[i].nome, imc);
            break;
        }
    }
}
int main()
{
    struct pessoasStruct pessoas[qtdPessoas];
    cadastroDePessoas(pessoas);
    localizarPessoas(pessoas);

    getchar();
    return 0;
}
