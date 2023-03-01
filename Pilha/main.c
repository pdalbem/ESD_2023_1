#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha *p = criarPilha();

int op;
    char nome[20] ;
    do
    {
		printf("1- Empilhar \n");
		printf("2 - Desempilhar \n");
		printf("3 - Mostrar \n");
		printf("4 - Sair \n");
		printf("Escolha a sua opção: ");
		scanf("%d", &op);

		switch (op)
		{
			case 1:
			    printf("Nome do item: ");
				scanf("%s", nome);
			    empilhar(p, nome);
			    break;

			case 2: desempilhar(p); break;
			case 3: mostrar(p);break;

		}

	}while (op<=3);

	return 0;
}