#include <stdio.h>

int main(){
    int a = 0;
    if (a==0){ //così è una condizione
        printf("sì\n");
    }

    if(a=0){ //così è un'assegnazione 
            //si valuta il valore dell'assegnazione (falso se 0 altrimenti sempre vero)
        printf("non dovrebbe stampare qui\n");
    }
}