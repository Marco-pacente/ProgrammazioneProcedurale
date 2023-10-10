#include <stdio.h>
int main(){ 
    signed int a = 12; //intero senza segno (4 byte)
    printf("sizeof int %ld\n", sizeof(a));
    int b = -5; //4 byte
    printf("sizeof int %ld\n", sizeof(b));
    short c = 127; //2 byte
    printf("sizeof int %ld\n", sizeof(c));
    long d = 4000000; //8 byte in teoria
    printf("sizeof int %ld\n", sizeof(d));
    long long int r; //8 byte
    printf("sizeof int %ld\n", sizeof(r));
}