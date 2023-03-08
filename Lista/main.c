#include <stdio.h>
#include "lista.h"

void menuInserir(Lista *lista)
{
    char nome[20];
    printf("\n Digite o nome a ser inserido: ");
    scanf("%s", nome);

    if (listaVazia(lista))
        inserirInicio(lista, nome);
    else
    {
        int option;
 
            printf("\n 1 - Inserir no início");
            printf("\n 2 - Inserir no final");
            printf("\n 3 - Inserir em pos específica");
            printf("\n 4 - Voltar");

            printf("\n Digite sua opção: ");
            scanf("%d", &option);
            switch (option)
            {
            case 1:
                inserirInicio(lista, nome);
                break;
            case 2:
                inserirFinal(lista, nome);
                break;
            case 3:
                int pos;
                printf("\n Digite a posição: ");
                scanf("%d", &pos);
                inserirPosicaoEspecifica(lista, nome, pos);
            }

    }
}

int main()
{
    Lista *lista = criarLista();

    int op;
    char nome[20];
    do
    {
        printf("\n 1- Inserir ");
        printf("\n 2 - Remover ");
        printf("\n 3 - Mostrar ");
        printf("\n 4 - Sair ");
        printf("\n Escolha a sua opção: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            menuInserir(lista);
            break;

        case 2:
            int pos;
            printf("Digite a posição para remoção: ");
            scanf("%d", &pos);
            remover(lista, pos);
            break;
        case 3:
            mostrar(lista);
            break;
        }

    } while (op <= 3);

    return 0;
}
