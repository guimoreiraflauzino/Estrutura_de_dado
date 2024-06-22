typedef struct no_arvore{
    int valor;
    struct no_arvore* direita;
    struct no_arvore* esquerda;
} no_arvore;

no_arvore* criar_no(int valor);
void inserir_no(no_arvore** a, int valor);
void em_ordem(no_arvore* a);
void pre_ordem(no_arvore* a);
void pos_ordem(no_arvore* a);
