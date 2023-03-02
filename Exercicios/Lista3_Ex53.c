/*  53. Escreva um programa que leia um número inteiro positivo n e em seguida imprima n linhas do chamado 
    Triângulo de Floyd. Para n = 6, temos:  1
                                            2 3
                                            4 5 6
                                            7 8 9 10
                                            11 12 13 14 15
                                            16 17 18 19 20 21 */

#include <stdio.h>
int main() {

    int n, i, j, c=0;

    do  {
        printf("\nDigite um numero inteiro positivo para obter o triangulo de floyd: ");
        scanf("%d", &n);
    }while(n <= 0);
    
    for(i = 0; i <= n; i++) {
        for(j = 0; j < i; j++) {
            c++;
            printf("\t%d", c);
        } 
        printf("\n");
    }

    return 0;
}