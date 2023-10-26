#include <stdio.h>
int main(){
    int a = 1;
    int b = 0;
    int c;
    
    c = a++, b++;

    printf("c = %d, a = %d, b = %d\n", c, b, a);
}