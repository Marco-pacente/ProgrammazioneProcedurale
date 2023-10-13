#include <stdio.h>

enum giorni_settimana {lunedi = 1, martedi, mercoledi, giovedi, venerdi, sabato, domenica};

enum giorni_settimana giorno_dopo(enum giorni_settimana attuale){
    return (attuale+1)%7;
}

void stampaGiorno(enum giorni_settimana giorno){
    switch (giorno)
    {
        case 1:
            printf("lunedì");
            break;
        case 2:
            printf("martedì");
            break;
        case 3:
            printf("mercoledi");
            break;
        case 4:
            printf("giovedì");
            break;
        case 5:
            printf("venerdì");
            break;
        case 6:
            printf("sabato");
            break;
        case 7:
            printf("domenica");
            break;
    default:
        printf("what");
        break;
    }
}

int main(){
    enum giorni_settimana oggi = venerdi;
    printf("oggi è ");
    stampaGiorno(oggi);

    printf("\ndomani sarà ");
    stampaGiorno(giorno_dopo(oggi));
    printf("\n");
}