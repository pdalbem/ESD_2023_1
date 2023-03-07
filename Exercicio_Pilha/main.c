#include <stdio.h>
#include "pilha.h"

int main()
{
	Pilha *pilha = criarPilha();
	FILE *fp;
	char c;
	fp = fopen("programa.c", "r"); /* Arquivo ASCII, para leitura */
	if (!fp)
	{
		printf("Erro na abertura do arquivo");
		return 0;
	}
	while ((c = getc(fp)) != EOF) /* Enquanto não chegar ao final do arquivo */
	{
		if (c == '{')
			empilhar(pilha, "{");
		if (c == '}')
			desempilhar(pilha);
	}
	fclose(fp);
	if (pilhaVazia(pilha))
		printf("Compilação OK");
	else
		printf("Erro!!");
	getchar();

	return 0;
}