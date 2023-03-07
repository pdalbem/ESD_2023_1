typedef struct pilha Pilha;

Pilha *criarPilha();
void empilhar(Pilha *p, char nome[]);
void desempilhar (Pilha *p);
void mostrar (Pilha *p);
int pilhaVazia(Pilha *p);
int pilhaCheia(Pilha *p);