#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "aluno.h"

int main()
{
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
			char nome[20];
			printf("Nome do aluno: ");
			scanf("%s", nome);

			int pront;
			printf("Prontuário do aluno: ");
			scanf("%d", &pront);

			float ira;
			printf("Ira do aluno: ");
			scanf("%f", &ira);

			Aluno *a = criarAluno(nome, pront, ira);

			inserir(f, a);
			break;

		case 2:
			remover(f);
			break;
		case 3:
			mostrar(f);
			break;
		}

	} while (op <= 3);

	return 0;
}