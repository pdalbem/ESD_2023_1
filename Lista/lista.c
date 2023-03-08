#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

#define MAXTAM 5

struct lista
{
    char item[MAXTAM][20];
    int ini, fim;
};

Lista *criarLista()
{
    Lista *lista = (Lista *)malloc(sizeof(Lista));
    if (lista == NULL)
        printf("Não foi possível alocar memória");
    else
    {
        lista->ini = 0;
        lista->fim = 0;
    }
    return lista;
}

int listaCheia(Lista *lista)
{
    return (lista->fim == MAXTAM) ? 1 : 0;
}

int listaVazia(Lista *lista)
{
    return (lista->fim == 0) ? 1 : 0;
}

void inserirInicio(Lista *lista, char nome[])
{
    if (listaCheia(lista))
        printf("Lista Cheia");
    else
    {
        for (int i = lista->fim; i > lista->ini; i--)
            strcpy(lista->item[i], lista->item[i - 1]);

        strcpy(lista->item[lista->ini], nome);
        lista->fim++;
        printf("Inserido com sucesso \n");
    }
}

void inserirFinal(Lista *lista, char nome[])
{
    if (listaCheia(lista))
        printf("Lista Cheia");
    else
    {
        strcpy(lista->item[lista->fim], nome);
        lista->fim++;
        printf("Inserido com sucesso \n");
    }
}

void inserirPosicaoEspecifica(Lista *lista, char nome[], int pos)
{
    if (listaCheia(lista))
        printf("Lista Cheia");
    else
    {
        if (pos < lista->ini || pos > lista->fim)
            printf("Posição inválida");
        else
        {
            for (int i = lista->fim; i > pos; i--)
                strcpy(lista->item[i], lista->item[i - 1]);

            strcpy(lista->item[pos], nome);
            lista->fim++;
            printf("Inserido com sucesso \n");
        }
    }
}

void remover(Lista *lista, int pos)
{
    if (listaVazia(lista))
        printf("Lista Vazia");
    else
    {
        for (int i = pos; i < lista->fim-1; i++)
            strcpy(lista->item[i], lista->item[i + 1]);
        lista->fim--;
        printf("Removido com sucesso");
    }
}

void mostrar(Lista *lista)
{
    if (listaVazia(lista))
        printf("Lista vazia");
    else
       for (int i=lista->ini;i<lista->fim;i++)
         printf("\n Item: %s", lista->item[i]);
}
