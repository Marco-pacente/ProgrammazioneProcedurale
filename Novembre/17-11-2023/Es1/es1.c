#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    printf("inserisci due numeri a e b:\t");
    scanf("%d %d", &a, &b);
    if(b >= 0){
        printf("b è un numero positivo\n");
    }
    if (a%2)
    {
        printf("a è dispari\n");
    }else{
        printf("a è pari\n");
    }
    printf("a + b = %d\n", a + b);
    printf("|a| + |b| = %d\n", (abs(a) + abs(b)));
}