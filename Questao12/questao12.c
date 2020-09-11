#include <stdio.h>
#include <stdlib.h>
/*
Escrever um programa que cadastre a matrícula e duas notas de 3
alunos. Em seguida imprima a matrícula, o nome e a média de cada um
deles
*/

struct alunosStruct
{
    int matricula;
    float nota1;
    float nota2;
    float mediaNotas;
};

void cadastroDeAlunos(struct alunosStruct alunos[])
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

void imprimirAlunosNotas(struct alunosStruct alunos[])
{
    for (int i = 1; i <= 3; i++)
    {
        printf("\nMatricula Aluno %d : %d \n", i, alunos[i].matricula);
        alunos[i].mediaNotas = (alunos[i].nota1 + alunos[i].nota2) / 2;
        printf("Media: %.2f", alunos[i].mediaNotas);
        printf("\n");
    }
}

int main()
{
    struct alunosStruct alunos[3];
    cadastroDeAlunos(alunos);
    imprimirAlunosNotas(alunos);

    return 0;
}