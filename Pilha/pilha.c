#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

#define MAXTAM 5

struct pilha
{
    char item[MAXTAM][20];
    int topo;
};

Pilha *criarPilha()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    if (p == NULL)
        printf("Não foi possível alocar memória");
    else
        p->topo = 0;
    return p;
}

void empilhar(Pilha *p, char nome[])
{
    if (p->topo == MAXTAM)
        printf("Pilha cheia\n");
    else
    {
        strcpy(p->item[p->topo], nome);
        p->topo++;
    }
}

void desempilhar(Pilha *p)
{
    if (p->topo == 0)
        printf("Pilha vazia\n");
    else
        p->topo--;
}

void mostrar(Pilha *p)
{
    if (p->topo == 0)
        printf("Pilha vazia\n");
    else
        for (int i = 0; i < p->topo; i++)
            printf("Item: %s \n", p->item[i]);
}
