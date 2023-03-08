typedef struct lista Lista;

Lista* criarLista();
void inserirInicio(Lista *lista, char nome[]);
void inserirFinal(Lista *lista, char nome[]);
void inserirPosicaoEspecifica(Lista *lista, char nome[], int pos);
void remover (Lista *lista, int pos);
void mostrar (Lista *lista);
int listaCheia(Lista *lista);
int listaVazia(Lista *lista);
