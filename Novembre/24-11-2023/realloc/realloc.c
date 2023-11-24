#include <stdio.h>
#include <stdlib.h>
int main(){
    int * p = malloc(sizeof(int));
    *p = 12;
    printf("%d\n", *p);
    p = realloc(p, sizeof(short int));
    printf("%d\n", *p);
    free(p);    
}