// evento1 = [começo1, fim1] e evento2 = [começo2, fim2].
// conflito: quando um momeno está nos dois eventos

/*  Restrições:
    evento1Tamanho == evento2Tamanho == 2.
    
    começo1 <= fim1
    começo2 <= fim2
*/

bool haveConflict(char ** event1, int event1Size, char ** event2, int event2Size){
    int i;
    int hStart, mStart, hEnd1, mEnd1;
    int hStart2, mStart2, hEnd, mEnd;

    do {
        do {
            printf("\nDigite o horario de inicio do evento 1: ");
            sscanf(event1[0],"%d:%d", &hStart,&mStart);
        } while (strlen(event1[0]) != 5);
        
        do {
            printf("\nDigite o horario de termino do evento 1: ");
            sscanf(event1[1],"%d:%d", &hEnd1,&mEnd1);
        } while (strlen(event1[1]) != 5);
    } while ((hStart*60+mStart) > (hEnd1*60+mEnd1));

    //event1Size = strlen(event1);
    
    do {
        do {
            printf("\nDigite o horario de inicio do evento 2: ");
            sscanf(event2[0],"%d:%d", &hStart2,&mStart2);
        } while (strlen(event2[0]) != 5);
       
        do {
            printf("\nDigite o horario de termino do evento 2: ");
            sscanf(event2[1],"%d:%d", &hEnd,&mEnd);
        } while (strlen(event2[1]) != 5);
    } while ((hStart2*60+mStart2) > (hEnd*60+mEnd));
       
    //event2Size = strlen(event2);

    if ((hEnd1*60+mEnd1) >= (hStart2*60+mStart2)) {   
        return true;               
    } else {
        return false;
    } 
}

/*
    Ponteiro para ponteiro:
    pon1 armazena o endereço do pon2 que armazena o endereço de uma variável que guarda um valor
*/
