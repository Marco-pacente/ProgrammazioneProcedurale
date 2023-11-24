#include <stdio.h>
#include <stdlib.h>

int main(){
    double *dPtr = malloc(sizeof(double));
    if(dPtr == NULL){
        printf("Error\n");
    }else{
        *dPtr = 0.07;
        printf("%f\n", *dPtr);
    }
    short int*q = (short int*) malloc(sizeof(int));
    *q = 3;
    *(q+1) = 6;
    printf("%d\n", *q);
    printf("%d\n", *(q+1));
    printf("%d\n", *((int *)q));
}