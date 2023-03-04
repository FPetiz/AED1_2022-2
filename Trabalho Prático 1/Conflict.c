/*  
    2446. Determine if Two Events Have Conflict
    
    You are given two arrays of strings that represent two inclusive events that happened on the same day, event1 and event2, where:

    event1 = [startTime1, endTime1] and
    event2 = [startTime2, endTime2].
    Event times are valid 24 hours format in the form of HH:MM.

    A conflict happens when two events have some non-empty intersection (i.e., some moment is common to both events).

    Return true if there is a conflict between two events. Otherwise, return false.
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
    Do segundo para o terceiro:
     - Fiz direto no LeetCode, por isso não tem a main.
     - Não tem restrição para valor absurdo de horário, por exemplo:
     o usuário não é impedido de inserir valores negativos ou acima de 24 para horas e de 59 mara minutos.
     - Também, nenhum condicional no código corresponde a isto: evnet1.length == event2.length == 2.
*/
