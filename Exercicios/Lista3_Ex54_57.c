/*  54. Faça um programa que receba um número inteiro maior do que 1, e verifique se o número fornecido é primo ou não. 
    55. Escreva um programa que leia um inteiro não negativo n e imprima a soma dos n primeiros números primos.
*/

#include <stdio.h>

int main () {

    int num, option, i, c=1, divisor=0, soma=0;

    do {
        printf("\nDigite um numero inteiro maior que 1: ");
        scanf("%d", &num);
    }while(num < 2);

   do {
        printf("\nEscolha entre as opcoes:\n");
        printf("\n1: Verificar se %d eh primo", num);
        printf("\n2: Somar os primeiro %d primos", num);
        printf("\n3: Contar quantos numeros primos existem entre 1 e %d\n\t", num);
        printf("\nDigite outro valor para sair");
        scanf("%d", &option);
   } while (option < 1 || option > 3);
    
    switch (option) {

        case 1:
            for (i = 1; i <= num; i++) {
                if (num % i == 0) {
                divisor++;
            } 
            }
            if (divisor == 2) {
                printf("\nO numero eh primo");
            } else {
                printf("\nO numero nao eh primo");
            }
            
        break;

    /*
        ainda não
        
    */
       
        case 2:
           
            printf("\nA soma dos primeiros %d primos: %d", num, soma);
        break;

//ainda não
        case 3:
            while (i < num) {
                for (c = 1; c <= i; c++) {
                    if (i % c == 0) {
                    divisor++;
                    } 
                }
                if (divisor == 2) {
                    soma =+ i;
                } 
                c++;
            }
            printf("\nA soma dos primos entre 1 e %d: %d", num, soma);
        break;
    }

    return 0;
}