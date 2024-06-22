#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


no_arvore* criar_no(int valor){
    no_arvore* novo_no = (no_arvore*)malloc(sizeof(no_arvore));
    novo_no->valor = valor;
    novo_no->direita = NULL;
    novo_no->esquerda = NULL;
    return novo_no;
}

void inserir_no(no_arvore** a, int add){
    no_arvore* temp = *a;
    if (temp->valor > add){
        if (temp->esquerda == NULL){
            temp->esquerda = criar_no(add);
            return;
        }
        inserir_no(&temp->esquerda, add);
    }
    else if (temp->valor <= add){
        if (temp->direita == NULL){
            temp->direita = criar_no(add);
            return;
        }
        inserir_no(&temp->direita, add);
    }
}

void em_ordem(no_arvore* a){
    if (a == NULL){
        return;
    }

    no_arvore* temp = a;
    em_ordem(temp->esquerda);
    printf("%d -> ", temp->valor);
    em_ordem(temp->direita);
}

void pre_ordem(no_arvore* a){
    if (a == NULL){
        return;
    }

    no_arvore* temp = a;
    printf("%d -> ", temp->valor);
    pre_ordem(temp->esquerda);
    pre_ordem(temp->direita);
}

void pos_ordem(no_arvore* a){
    if (a == NULL){
        return;
    }
    no_arvore* temp = a;
    pos_ordem(temp->esquerda);
    pos_ordem(temp->direita);
    printf("%d -> ", temp->valor);
}
