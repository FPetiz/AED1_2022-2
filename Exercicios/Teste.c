/******************************************************************************
    Given an integer array nums sorted in non-decreasing order, remove the 
    duplicates in-place such that each unique element appears only once. 
    The relative order of the elements should be kept the same.
*******************************************************************************/

#include <stdlib.h>
#include <stdio.h>
int printArray(int c, int *array);

int main () {
    int num[7], finalNum[7];
    int i, j, c = 0;
    int numSize = sizeof(num) / sizeof(int);

    /* Recebe valores de entrada */
    printf("Atribua valores ao vetor: ");
    for( i = 0; i < numSize; i++ ){
        printf("\n[%d]: ", i+1);
        scanf("%d", &num[i]);
    }
        
    /* Exibe Vetor de Entrada */
    printf("Antes: ");
    printArray(numSize, num);

    /* Remove elementos com valor duplicado */
    for(i = 0; i < numSize; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(num[i] == finalNum[j])
                break;
        }

        if(j == c)
        {
            finalNum[c] = num[i];
            c++;
        }
    }

    /* Exibe Vetor de Saida */
    printf("Depois: ");
    printArray(c, finalNum);

    return 0;
}

int printArray (int c, int *array) {
    int i=0;
    printf("\n");
        for( i = 0; i < c; i++ )
            printf("%d ", array[i] );
    printf("\n");
    return 0;
}