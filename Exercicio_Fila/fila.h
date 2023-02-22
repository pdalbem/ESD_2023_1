#include "aluno.h"

typedef struct fila Fila;

Fila *criar();
void inserir(Fila *f, Aluno *a);
void remover(Fila *f);
void mostrar(Fila *f);
