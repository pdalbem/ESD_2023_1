#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    Fila *f = criar();

    int op;
  
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
			   Aluno *a = criarAluno();
			    lerNome(a);
				lerPront(a);
				lerIra(a);
 			    inserir(f, a);
			    break;

			case 2: remover(f); break;
			case 3: mostrar(f);break;

		}

	}while (op<=3);

	return 0;
}