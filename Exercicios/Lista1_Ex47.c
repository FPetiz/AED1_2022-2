/* 47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha. */

#include <stdio.h>

int main(){

    int num1, num2, num3, num4;

    printf("\nDigite um numero de 1000 a 9999: ");
    scanf("%1d%1d%1d%1d", &num1, &num2, &num3, &num4);    // para ler cada dígito do número

    printf("\n%d\n%d\n%d\n%d\n", num1, num2, num3, num4);
    return 0;
}