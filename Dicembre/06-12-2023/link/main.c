#include <stdio.h>
#include "lib.h"
extern int a; //qui si dichiara (e non si definisce) la variabile esterna a
//viene effettivamente dichiarata in lib.c
extern int b;

int main(){
    printHello();
    printf("a = %d\n", a);
    //printf("b = %d\n", b);
}