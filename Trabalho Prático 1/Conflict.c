// evento1 = [começo1, fim1] e evento2 = [começo2, fim2].
// conflito: quando um momeno está nos dois eventos

/*  Restrições:
    evento1Tamanho == evento2Tamanho == 2.
    
    começo1 <= fim1
    começo2 <= fim2
*/

#include <stdio.h>
#include <string.h>

bool haveConflict(char ** evento1, int evento1Tamanho, char ** evento2, int evento2Tamanho);

int main () {

    int i, ev1Tam, ev2Tam;
    char ev1[2];        
    char ev2[2];

    /*  
        avaliar se o horario de começo do evento é menor que o do fim
    */

    for (i = 0; i < 2; i++) {
        if (i == 0) {
            do {
                prinf("\nDigite o horario de inicio do evento 1: ");
                gets(ev1[i]);
            } while (strlen(ev1[i] != 5));
        } else {
            do {
                prinf("\nDigite o horario de termino do evento 1: ");
                gest(ev1[i]);
            } while (strlen(ev1[i] != 5));
        }
    }
    ev1Tam = strlen(ev1);

    for (i = 0; i < 2; i++) {
        if (i == 0) {
            do {
                prinf("\nDigite o horario de inicio do evento 2: ");
                gets(ev2[i]);
            } while (strlen(ev2[i] != 5));
        } else {
            do {
                prinf("\nDigite o horario de termino do evento 2: ");
                gets(ev2[i]);
            } while (strlen(ev2[i] != 5));
        }
    }   
    ev2Tam = strlen(ev2);

    if (haveConflict(ev1, ev1Tam, ev2, ev2Tam)) {
        printf("\nVerdadeiro!\n");
    } else{
        printf("\nFalso!\n");
    }

    return 0;
}

bool haveConflict(char ** evento1, int evento1Tamanho, char ** evento2, int evento2Tamanho) {

/*
    Tenho que dar um jeito de pegar os valores de fim de ev1 e começo de ev2 
    ver se o ev2 é menor ou igual que ev1
    isso não e a string toda, então teria de dar um jeito de fazer isso percorrendo os caracteres dessas posições e transformando em int para fazer os cálculos
*/
    int i;
    int length = strlen(evento1[1]);
    for (i = 0; i < length; i++) {
        
    }

    if (evento1[1] > evento2[0]) {   // se tem conflito o começo do evento 2 precisa ser menor que o final do evento 1
        return true;               
    } else {
        return false;
    }

}

/*
    Ponteiro para ponteiro:
    pon1 armazena o endereço do pon2 que armazena o endereço de uma variável que guarda um valor
*/