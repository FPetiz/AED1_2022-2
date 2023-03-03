#include <stdio.h>

int main()
{
    int steps, i, possibilidades = 0, t1=0, t2=1;

    do {
        printf("\nNumero de degraus: ");            
        scanf("%d", &steps);
    } while (steps < 1 || steps > 45);

    for (i = 0; i < steps; i++) {
        possibilidades = t1+t2;
        t1 = t2;
        t2 = possibilidades;
    }

    printf("\nNumero de possbilidades de subir: %d\n\n", possibilidades);
    return 0;
}