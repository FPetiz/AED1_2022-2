/* 48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos. */

#include <stdio.h>

int main() {

    int hours=0, mins=0, secs;

    do {
        printf("\nDigite um valor inteiro em segundos: ");
        scanf("%d", &secs);
    } while(secs < 0);

    /*  
        loop enquanto segundos for maior que 60, verifica:
        se é maior que segundos de uma hora, subtrai esses segundos e incrementa horas
        senão, verifica: 
        se é maior que segundos de um minuto, subtrai e incrementa mins
        o que resta é segundos
    */ 

   while (secs > 60) {
        if (secs > 3600) {
            secs = secs - 3600;
            hours++;
        } else {
            if (secs > 60) {
                secs = secs - 60;
                mins++;
            }
        }
   }

   printf("\nHoras: %d\nMinutos: %d\nSegundos: %d", hours, mins, secs);

    return 0;
}