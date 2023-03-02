/*  31. Faça um programa que contenha um menu com as seguintes opções:
    (a) Ler uma string S1 (tamanho maximo 20 caracteres); ´
    (b) Imprimir o tamanho da string S1;
    (c) Comparar a string S1 com uma nova string S2 fornecida pelo usuario e imprimir o resultado da comparação;
    (d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
    (e) Imprimir a string S1 de forma reversa;
    (f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;
    (g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2.
    Os caracteres C1 e C2 serao lidos pelo usuário; 
    (h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;
    (i) Retornar uma substring da string S1. Para isso o usuario deve informar a partir de qual posição deve 
    ser criada a substring e qual é o tamanho da substring. */

#include <stdio.h>
#include <string.h>

int main () {

    char s1[20], s2[20], ch;
    int comp, i, quant=0;

    
    // (a)
    printf("\nDigite uma string de ate 20 caracteres: ");
    gets(s1);
    printf("%s", s1);

    // (b)
    printf("\nNumero de caracteres: %d", strlen(s1));
    printf("\nO tamanho de s1: %d", sizeof(s1));

    //(c)
    printf("\nInsira uma nova string: ");
    gets(s2);

    comp = strncmp(s1, s2, 10);
    if (comp > 0) {
        printf("\nA s1 eh maior");
    } else if (comp < 0) {
        printf("\nA s2 eh maior");
    } else {
        printf("\nAs duas strings sao iguais");
    }

    // (d)
    strcat(s1, s2);
    printf("\n%s\n", s1);

    //(e)
    for (i = 20; i > -1; i--) {
        printf("%c", s1[i]);
    }

    //(f)
    printf("\nInsira o caractere que desja buscar: ");
    scanf("%c", &ch);

    for (i = 0; s1[i] != '\0'; ++i) {
        if (ch == s1[i]) {
            quant++;
        }
    }
    printf("\n%c aparece %d vezes em s1", ch, quant);

    //(g)


    //(h)


    //(i)


    return 0;
}