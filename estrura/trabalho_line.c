#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    float y;
} Ponto;

void ler_pontos(FILE *arquivo, Ponto *pontos, int n) {
    for (int i = 0; i < n; i++) {
        fscanf(arquivo, "%d,%f\n", &pontos[i].x, &pontos[i].y);
    }
}

float calcular_media(int *valores, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += valores[i];
    }
    return (float)soma / n;
}

float calcular_media_float(float *valores, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += valores[i];
    }
    return soma / n;
}

float calcular_coeficiente_angular(Ponto *pontos, int n, float media_x, float media_y) {
    float soma_xy = 0, soma_x_quad = 0;
    for (int i = 0; i < n; i++) {
        soma_xy += (pontos[i].x - media_x) * (pontos[i].y - media_y);
        soma_x_quad += (pontos[i].x - media_x) * (pontos[i].x - media_x);
    }
    return soma_xy / soma_x_quad;
}

float calcular_coeficiente_linear (float coef_angular, float media_x, float media_y){
    
    return media_y - coef_angular * media_x;

}
int main() {
    int n;

   FILE *arquivo;
    int n;
    char nome_arquivo[50];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    printf("Digite o número de pontos: ");
    scanf("%d", &n);

    Ponto *pontos = (Ponto *)malloc(n * sizeof(Ponto));

    printf("Digite os pontos (formato x y):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %f", &pontos[i].x, &pontos[i].y);
    }

    float coef_angular = calcular_coeficiente_angular(pontos, n);
    float coef_linear = calcular_coeficiente_linear(pontos, n, coef_angular);

    printf("Coeficiente angular: %.2f\n", coef_angular);
    printf("Coeficiente linear: %.2f\n", coef_linear);

    free(pontos);

    return 0;
}





