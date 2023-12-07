#include <stdio.h>
#include "lib.h"

static int b = 4; //variabile "privata", visibile solo in lib.c
int a;
void printHello(void){
    a = 4;
    printf("Hello!\n");
}