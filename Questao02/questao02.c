#include <stdio.h>
#include <stdlib.h>

/*
02- Faça um programa para ler a nota da prova de 15 alunos e armazene num
vetor, calcule e imprima a media geral.
*/

int main(void)
{
    int qtdAlunos = 15;
    float notaAlunos[15];
    int totalnotas;
    float mediaGeral;

    for (int i = 1; i <= qtdAlunos; ++i)
    {
        printf("Digite a Nota do Aluno %d : \n", i);
        scanf("%f", &notaAlunos[i]);
        totalnotas += notaAlunos[i];
    }
    for (int i = 1; i <= qtdAlunos; ++i)
    {
        printf("A nota do Aluno %d é: %.2f \n", i, notaAlunos[i]);
    }
    mediaGeral = totalnotas / qtdAlunos;
    printf("A Média Geral da turma foi: %.2f \n", mediaGeral);
}