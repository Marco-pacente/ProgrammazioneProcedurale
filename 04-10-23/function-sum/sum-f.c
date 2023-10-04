#include <stdio.h>
int sum(int a, int b){ //definizione funzione e parametri con tipi
    return a + b; //valore di ritorno uguale alla somma dei due parametri
}
int main(){
    int a = 0;
    a = sum(4, 5); //assegnazione alla variabile a del valore di ritorno della funzione con parametri 4 e 5
    printf("4 + 5 = %d\n", a);
}
