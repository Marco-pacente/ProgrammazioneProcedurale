#include <stdio.h>
int main(){
    char n = 127; //è un carattere con segno quindi va da -128 a 127
    printf("%d", n); 
    n++; //01111111 + 1 = 10000000
    printf(" +1 = %d\n", n); //10000000 in complemento a 2 è -128
    return 0;
}