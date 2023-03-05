
bool haveConflict(char ** event1, int event1Size, char ** event2, int event2Size){
    int i;
    int hStart, mStart, hEnd1, mEnd1;
    int hStart2, mStart2, hEnd, mEnd;

    do {
        do {
            do {
                printf("\nDigite o horario de inicio do evento 1: ");
                sscanf(event1[0],"%d:%d", &hStart,&mStart);
            } while (hStart > 24 || hStart < 0 || mStart < 0 || mStart > 59);
        } while (strlen(event1[0]) != 5);
        
        do {
            do {
                printf("\nDigite o horario de termino do evento 1: ");
                sscanf(event1[1],"%d:%d", &hEnd1,&mEnd1);
            } while (hEnd1 < 0 || hEnd1 > 24 || mEnd1 < 0 || mEnd1 > 59);
        } while (strlen(event1[1]) != 5);
    } while ((hStart*60+mStart) > (hEnd1*60+mEnd1));

    
    do {
        do {
           do {
                printf("\nDigite o horario de inicio do evento 2: ");
                sscanf(event2[0],"%d:%d", &hStart2,&mStart2);
           } while (hStart > 24 || hStart < 0 || mStart < 0 || mStart > 59);
        } while (strlen(event2[0]) != 5);
       
        do {
            do {
                printf("\nDigite o horario de termino do evento 2: ");
                sscanf(event2[1],"%d:%d", &hEnd,&mEnd);
            } while (hEnd < 0 || hEnd > 24 || mEnd < 0 || mEnd > 59);
        } while (strlen(event2[1]) != 5);
    } while ((hStart2*60+mStart2) > (hEnd*60+mEnd));
       

    if (hStart*60+mStart < hStart2*60+mStart2) {
        if ((hEnd1*60+mEnd1) >= (hStart2*60+mStart2)) {   
            return true;               
        } else {
            return false;
        } 
    } else if (hStart2*60+mStart2 < hStart*60+mStart) {
        if ((hEnd*60+mEnd) >= (hStart*60+mStart)) {   
            return true;               
        } else {
            return false;
        } 
    } else {
        return true;
    }
}

/*
    Do terceiro para o quarto:
     - Fiz direto no LeetCode, por isso não tem a main.
     - Nenhum condicional no código corresponde a isto: evnet1.length == event2.length == 2.
*/
