#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(int argc, char* argv[]){
    no_arvore* arvore = criar_no(12);
    inserir_no(&arvore, 13);
    inserir_no(&arvore, 8);
    inserir_no(&arvore, 123);
    inserir_no(&arvore, 7);
    inserir_no(&arvore, 10);
    inserir_no(&arvore, 25);
    inserir_no(&arvore, 2);
    inserir_no(&arvore, 77);

    em_ordem(arvore);
    printf("NULL\n\n");
    
    pre_ordem(arvore);
    printf("NULL\n\n");

    pos_ordem(arvore);
    printf("NULL\n");
}
