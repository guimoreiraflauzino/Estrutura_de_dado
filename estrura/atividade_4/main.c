#include <stdio.h>
#include "lista.h"

int main() {
    No* lista = lista_criar();

    lista_inserir_final(lista, 'A');
    lista_inserir_final(lista, 'B');
    lista_inserir_final(lista, 'C');
    lista_inserir_final(lista, 'D');

    printf("Lista: ");
    lista_imprimir(lista);

    printf("Existe 'A' na lista? %d\n", lista_verificar_existencia(lista, 'A'));
    printf("Quantidade de 'B' na lista: %d\n", lista_verificar_ocorrencias(lista, 'B'));

    printf("Inverso: ");
    lista_imprimir_inversa(lista);

    lista_inserir_no_i(lista, 2, 'X');
    printf("Lista após inserção de 'X' na posição 2: ");
    lista_imprimir(lista);

    lista_remover_no_i(lista, 1);
    printf("Lista após remoção do nó na posição 1: ");
    lista_imprimir(lista);

    lista_remover_no(lista, 'C');
    printf("Lista após remoção dos nós com valor 'C': ");
    lista_imprimir(lista);

    lista_destruir(lista);
    
    return 0;
}
