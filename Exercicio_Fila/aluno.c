#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "aluno.h"

struct aluno
{
	char nome[20];
	int prontuario;
	float ira;
};

Aluno *criarAluno(char nome[], int pront, float ira)
{
	Aluno *a = (Aluno *)malloc(sizeof(Aluno));
	if (a == NULL)
		printf("Não foi possível alocar memória");
	else
	{
		strcpy(a->nome, nome);
		a->prontuario = pront;
		a->ira = ira;
	}
	return a;
}

void mostrarNome(Aluno *a)
{
	printf("Nome: %s \n", a->nome);
}

void mostrarPront(Aluno *a)
{
	printf("Prontuário: %d \n", a->prontuario);
}

void mostrarIra(Aluno *a)
{
	printf("IRA: %f \n", a->ira);
}
