#include <stdio.h>
#include <stdlib.h>

int primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("usar: %s <numero>\n", argv[0]);
        return 1;
    }

    int numero = atoi(argv[1]);

    if (is_prime(numero)) {
        printf("verdadeiro\n");
    } else {
        printf("falso\n");
    }

    return 0;
}
