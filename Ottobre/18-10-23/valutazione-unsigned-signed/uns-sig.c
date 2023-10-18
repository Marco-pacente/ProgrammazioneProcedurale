#include <stdio.h>
#include <limits.h>

int main(){
    int x = 0;
    int i = -1;
    unsigned int limit = 200U;
    long n = 30L;
    if( i < limit){ //riporta falso
                    //perchè i viene convertito a unsigned int
                    //quindi sarebbe tipo 0x7fffffff * 2U + 1U
                    //che quindi è tipo 4 miliardi e qualcosa
        x = limit * n;
    }
    printf("-1 in unsigned int è %u\n", (unsigned int) i);
    printf("%d\n", x);
}