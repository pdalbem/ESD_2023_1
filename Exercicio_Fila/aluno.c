#include <stdlib.h>
#include <stdio.h>
#include "aluno.h"

struct aluno
{
	char nome[20];
	int prontuario;
	float ira;
};

Aluno *criarAluno()
{
	Aluno *a = (Aluno *)malloc(sizeof(Aluno));
	return a;
}


void lerNome(Aluno *a)
{
	printf("Nome do aluno: ");
	scanf("%s", a->nome);
}

void lerPront(Aluno *a)
{
	printf("Prontuário do aluno: ");
	scanf("%d", &a->prontuario);
}

void lerIra(Aluno *a)
{
	printf("Ira do aluno: ");
	scanf("%f", &a->ira);
}

void mostrarNome (Aluno *a)
{
    printf ("Nome: %s \n", a->nome);
}

void mostrarPront (Aluno *a)
{
    printf ("Prontuário: %d \n", a->prontuario);
}

void mostrarIra (Aluno *a)
{
    printf ("IRA: %f \n", a->ira);
}
