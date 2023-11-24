#include <stdio.h>
#include <stdlib.h>
int main(){
    int * p = malloc(sizeof(int));

    p = realloc(p, sizeof(short int));
}