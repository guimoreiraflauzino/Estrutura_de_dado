#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* lista_criar() {
    No* cabeca = (No*)malloc(sizeof(No));
    cabeca->proximo = NULL;
    return cabeca;
}

void lista_inserir_final(No* L, char valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo = NULL;
    No* atual = L;
    while (atual->proximo != NULL) {
        atual = atual->proximo;
    }
    atual->proximo = novo_no;
}

void lista_imprimir(No* L) {
    No* atual = L->proximo;
    while (atual != NULL) {
        printf("%c ", atual->valor);
        atual = atual->proximo;
    }
    printf("\n");
}

int lista_verificar_existencia(No* L, char valor_busca) {
    No* atual = L->proximo;
    while (atual != NULL) {
        if (atual->valor == valor_busca)
            return 1; 
        atual = atual->proximo;
    }
    return 0; 
}

int lista_verificar_ocorrencias(No* L, char valor_busca) {
    int count = 0;
    No* atual = L->proximo;
    while (atual != NULL) {
        if (atual->valor == valor_busca)
            count++;
        atual = atual->proximo;
    }
    return count;
}

void lista_imprimir_inversa(No* L) {
    No* atual = L->proximo;
    if (atual == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    No* anterior = NULL;
    No* proximo = NULL;
    printf("Lista na ordem inversa: ");
    while (atual != NULL) {
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    atual = anterior;
    while (atual != NULL) {
        printf("%c ", atual->valor);
        proximo = atual->proximo;
        atual->proximo = anterior;
        anterior = atual;
        atual = proximo;
    }
    printf("\n");
}

void lista_inserir_no_i(No* L, int i, char valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    No* atual = L;
    int pos = 0;
    while (atual != NULL && pos < i) {
        atual = atual->proximo;
        pos++;
    }
    if (pos != i || atual == NULL) {
        printf("Posição inválida\n");
        free(novo_no);
        return;
    }
    novo_no->proximo = atual->proximo;
    atual->proximo = novo_no;
}

void lista_remover_no_i(No* L, int i) {
    No* anterior = L;
    int pos = 0;
    while (anterior->proximo != NULL && pos < i) {
        anterior = anterior->proximo;
        pos++;
    }
    if (pos != i || anterior->proximo == NULL) {
        printf("Posição inválida\n");
        return;
    }
    No* temp = anterior->proximo;
    anterior->proximo = temp->proximo;
    free(temp);
}

void lista_remover_no(No* L, char valor_busca) {
    No* anterior = L;
    No* atual = L->proximo;
    while (atual != NULL) {
        if (atual->valor == valor_busca) {
            anterior->proximo = atual->proximo;
            free(atual);
            atual = anterior->proximo;
        } else {
            anterior = atual;
            atual = atual->proximo;
        }
    }
}

void lista_destruir(No* L) {
    No* atual = L->proximo;
    while (atual != NULL) {
        No* temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    free(L);
}
