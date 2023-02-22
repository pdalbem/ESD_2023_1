
typedef struct fila Fila;

typedef struct aluno Aluno;

Fila *criar ();
void inserir (Fila *f, Aluno *a);
void remover (Fila *f);
void mostrar (Fila *f);

Aluno *criarAluno();

void lerNome(Aluno *a);
void lerPront(Aluno *a);
void lerIra(Aluno *a);