#include <stdio.h>

enum giorni_settimana {lunedi, martedi, mercoledi, giovedi, venerdi, sabato, domenica};

enum giorni_settimana domani(enum giorni_settimana giorno){
    return (giorno+1)%7;
}

int main(){
    enum giorni_settimana oggi = giovedi;
    printf("Oggi è: %d\n", oggi);
    printf("Domani sarà %d\n", domani(oggi));
    return 0;
}