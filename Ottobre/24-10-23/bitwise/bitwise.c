#include <stdio.h>
int main(){
    int a = 6;
    int b = 11;
    printf("%d & %d = %d\n", a, b, a&b); //AND bit a bit a e b
    printf("%d | %d = %d\n", a, b, a|b); //stessa cosa di sopra ma con OR
    printf("%d ^ %d = %d\n", a, b, a^b); //XOR
    printf("%d << 2 = %d\n", a, a<<2);
    printf("%d >> 1 = %d\n", a, a>>1);
}