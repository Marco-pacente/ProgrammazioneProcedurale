#include <stdio.h>
int main(){
    float n; //precisione singola (6 cifre) (4byte)
    double n1; //precisione doppia (15 cifre) (8 byte)
    long double n2; //precisione doppia estesa (19 cifre) (10 cifre)
    float a = 1234561.01, b = 1.06;
    float somma = a + b;
    printf("%f + %f = %f", a, b, somma); 
}