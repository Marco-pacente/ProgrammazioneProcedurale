#include <stdio.h>
int a = 0; //livello globale (in tutto il file)

void printAGlobale(){
    printf("Variabile a globale = %d\n", a); //si usa la variabile a globale
}

int main(){
    int a = 1; //livello locale (in questo blocco)
    printf("Variabile a locale = %d\n", a); //si usa la vaiabile a locale
    printAGlobale();
}