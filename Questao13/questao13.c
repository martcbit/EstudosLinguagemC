#include <stdio.h>
#include <stdlib.h>

/*
Escrever um programa que cadastre a altura, o peso, o cpf e sexo de algumas pessoas. 
Com os dados cadastrados, em seguida localizar uma pessoas através do seu CPF 
e imprimir o seu IMC.
*/
struct example
{
    int matricula;
    float nota1;
    float nota2;
    float mediaNotas;
};

void names(struct example alunos[])
{
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("\nDigite a Matricula do Aluno %d: \n", i);
        scanf("%d", &alunos[i].matricula);
        printf("Primeira Nota: \n");
        scanf("%f", &alunos[i].nota1);
        printf("Segunda Nota: \n");
        scanf("%f", &alunos[i].nota2);
    }
}

void name(struct example alunos[])
{
}

int main()
{

    return 0;
}