#include <stdio.h>
#include <stdlib.h>

/*
Escrever um programa que cadastre a altura, o peso, o cpf e sexo de algumas pessoas. 
Com os dados cadastrados, em seguida localizar uma pessoas através do seu CPF 
e imprimir o seu IMC.
*/

typedef struct
{
    char nome[100];
    char sexo; // 'm': masculino, 'f': femino
    float peso;
    float altura;
    long long cpf;
} Pessoa;

#define qtdPessoas 3

int main()
{
    Pessoa pessoas[qtdPessoas];

    printf("Campos: nome, altura, peso, cpf, sexo\n");
    for (int i = 1; (i <= qtdPessoas); i++)
    {
        printf("\nInforme o nome da pessoa(%i): \n", i);
        scanf("%s", &pessoas[i].nome);
        printf("\nInforme a Altura da pessoa(%i): \n", i);
        scanf("%f", &pessoas[i].altura);
        printf("\nInforme o Peso da pessoa(%i): \n", i);
        scanf("%s %f %f %Lu %c", &pessoas[i].peso, &pessoas[i].cpf, &pessoas[i].sexo);
        printf("\nInforme o CPF da pessoa(%i): \n", i);
        scanf("%Lu", &pessoas[i].cpf);
        printf("\nInforme o nome da pessoa(%i): \n\n\n", i);
        scanf("%c", &pessoas[i].sexo);
    }

    printf("\nInforme o CPF da pessoa: ");
    long long cpf_localizador;
    scanf("%Lu", &cpf_localizador); // 1

    printf("\nSexo\tNome\tIMC");
    for (int i = 0; (i < qtdPessoas); i++)
    { //2
        if (cpf_localizador == pessoas[i].cpf)
        { //3
            float imc = pessoas[i].peso / (pessoas[i].altura *
                                           pessoas[i].altura);
            printf("\n%c\t%s\t%1.2f\n", pessoas[i].sexo,
                   pessoas[i].nome, imc);
            break;
        }
    }

    getchar();
    return 0;
}