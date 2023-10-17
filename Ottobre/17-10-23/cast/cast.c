#include <stdio.h>

int main(){
    char a = 1027;
    printf("1027 in char diventa %d\n", a);

    int b = (int) 7; //cast esplicito

    long int c = a + b; //a e b vengono implicitamente convertiti in long int


}