#include <stdio.h>

int main () {

    int anterior=0, atual=1, proximo, i, n;

    printf("\nN: ");
    scanf("%d", &n);

    printf("%d %d ", anterior, atual);
    for (i = 0; i < n-2; i++) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        printf("%d ", proximo);
    }


    return 0;
}