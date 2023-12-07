#include <stdio.h>
#include "lib.h"


static int b = 4; //variabile "privata", visibile solo in lib.c //linkage interno
int a = 3; //linkage esterno (visibile in tutto il file e in altri file)
//static extern int a; non si può scrivere perchè sarebbe contraddittorio

void printHello(int f){ //esterno f
    int d = 6; //no linkage (visibile solo in questa funzione)
    static int e; //no linkage (è un altro tipo di static)
    printf("Hello!\n");
    extern int b;//stesso b di sopra
}