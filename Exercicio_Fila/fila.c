#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fila.h"

#define MAXTAM 5

struct fila
{
	Aluno *item[MAXTAM];
	int ini, fim, qtd;
};

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

Fila *criar()
{
	Fila *f = (Fila *)malloc(sizeof(Fila));
	f->ini = 0;
	f->fim = 0;
	f->qtd = 0;

	return f;
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

void inserir(Fila *f, Aluno *a)
{
	if (f->qtd == MAXTAM)
		printf("Fila cheia");
	else
	{
		f->item[f->fim] = a;

		// f->fim = f->fim+1;
		// if (f->fim==MAXTAM)
		//    f->fim=0;
		// Estas 3 linhas podem ser substituídas por:
		f->fim = (f->fim + 1) % MAXTAM;
		f->qtd++;
	}
}

void remover(Fila *f)
{
	if (f->qtd == 0)
		printf("Fila vazia");
	else
	{
		f->ini = (f->ini + 1) % MAXTAM;
		f->qtd--;
	}
}

void mostrar(Fila *f)
{
	if (f->qtd == 0)
		printf("Fila vazia");
	else
	{
		for (int i = f->ini; i < f->ini + f->qtd; i++)
		{
			printf("Prontuário: %d \n", f->item[i % MAXTAM]->prontuario);
			printf("Nome: %s \n", f->item[i % MAXTAM]->nome);
			printf("IRA: %f \n", f->item[i % MAXTAM]->ira);
		}
	}
}