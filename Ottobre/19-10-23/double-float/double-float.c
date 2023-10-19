#include <stdio.h>
#include <limits.h>

int main(){
    float r = 16777217;
    double l = 16777217;
    printf("l'imprecisione è di %.2f\n", (l-r));
}