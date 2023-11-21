#include <stdio.h>
int main(){
    int a = 5;
    int b = 10;
    int* p = &a;
    *p = *p+1;
    printf("Stampo a: %d\n", a);
    printf("Stampo il valore della variabile puntata da p: %d\n", *p);

    printf("Stampo p: %p\n", p);
    printf("Stampo indirizzo di a: %llu\n", (unsigned long long) &a);
    printf("Stampo indirizzo di b: %llu\n", (unsigned long long) &b);
    printf("Stampo indirizzo di p: %llu\n", (unsigned long long) &p);
}