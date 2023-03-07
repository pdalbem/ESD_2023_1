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
    if (pilhaCheia(p))
        printf("Pilha cheia\n");
    else
    {
        strcpy(p->item[p->topo], nome);
        p->topo++;
    }
}

void desempilhar(Pilha *p)
{
    if (pilhaVazia(p))
        printf("Pilha vazia\n");
    else
        p->topo--;
}

void mostrar(Pilha *p)
{
    if (pilhaVazia(p))
        printf("Pilha vazia\n");
    else
        for (int i = 0; i < p->topo; i++)
            printf("Item: %s \n", p->item[i]);
}

int pilhaVazia(Pilha *p)
{
   return p->topo==0? 1: 0;
   // if (p->topo==0)
   // return 1;
   // else
  //  return 0;
}

int pilhaCheia(Pilha *p)
{
   
   return p->topo==MAXTAM ? 1: 0;
   
   // if (p->topo==MAXTAM)
   // return 1;
   // else
   // return 0;
}
