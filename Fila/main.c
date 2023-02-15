#include <stdio.h>
#include "fila.h"

int main() {
    Fila *f = criar();

int op;
    char nome[20] ;
    do
    {

		printf("1- Inserir \n");
		printf("2 - Remover \n");
		printf("3 - Mostrar \n");
		printf("4 - Sair \n");
		printf("Escolha a sua opção: ");
		scanf("%d", &op);

		switch (op)
		{
			case 1:
			    printf("Nome do item: ");
				scanf("%s", nome);
			    inserir(f, nome);
			    break;

			case 2: remover(f); break;
			case 3: mostrar(f);break;

		}

	}while (op<=3);

	return 0;
}