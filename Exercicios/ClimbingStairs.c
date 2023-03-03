#include <stdio.h>

int main()
{
    int steps, possibilidades = 0, restante;

    do {
        printf("\nNumero de degraus: ");            
        scanf("%d", &steps);
    } while (steps < 1 || steps > 45);

    restante = steps;
    while (restante > 0) {
        if (restante == 1) {
            possibilidades = possibilidades + 1;
            restante = restante - 1;
        } else if (restante == 2) {
            possibilidades = possibilidades + 2;
            restante = restante - 2;
        } else {
            restante = restante - 3;
            possibilidades = possibilidades + 3;
        }
    }

    printf("\nNumero de possbilidades de subir: %d\n\n", possibilidades);
    return 0;
}