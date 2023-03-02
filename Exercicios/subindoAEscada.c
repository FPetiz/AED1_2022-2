#include <stdio.h>

int main()
{
    int degraus, possibilidades = 0, restante;

    do {
        printf("\nNumero de degraus: ");            
        scanf("%d", &degraus);
    } while (degraus < 1 || degraus > 45);

    restante = degraus;
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