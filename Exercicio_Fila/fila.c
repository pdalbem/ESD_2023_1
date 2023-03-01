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

Fila *criar()
{
	Fila *f = (Fila *)malloc(sizeof(Fila));
	if (f == NULL)
		printf("Não foi possível alocar memória");
	else
	{
		f->ini = 0;
		f->fim = 0;
		f->qtd = 0;
	}
	return f;
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
			mostrarNome(f->item[i % MAXTAM]);
			mostrarPront(f->item[i % MAXTAM]);
			mostrarIra(f->item[i % MAXTAM]);
		}
	}
}