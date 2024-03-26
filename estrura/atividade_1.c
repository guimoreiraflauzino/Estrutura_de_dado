#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        printf("Erro: Nenhum número informado.\n");
        return 1;
    }
        int sum = 0, smallest = atoi(argv[1]), largest = atoi(argv[1]);
    
   
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        sum += num;
        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;
    }
    
    
         int count = argc - 1;
    
    
         float average = (float)sum / count;

    printf("Quantidade de números recebidos: %d\n", count);
    printf("Valor médio dos números: %.1f\n", average);
    printf("Menor número: %d\n", smallest);
    printf("Maior número: %d\n", largest);
    printf("Números em ordem crescente: ");
    for (int i = 1; i < argc; i++) {
        printf("%d ", atoi(argv[i]));
    }
        printf("\n");

        return 0;
}
