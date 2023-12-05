#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    int d = 6;
    srand((unsigned)time(&t)); //si inizializza il generatore di numeri casuali
    /*printf("inserire la dimensione del dado\n");
    scanf("%d", &d);*/
    printf("%d\n", (rand()%d)+1);
}