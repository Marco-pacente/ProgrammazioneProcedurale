#include <stdio.h>
int main()
{
    int a = 0;
    int b;

    b = a++ ? a++ : (a+=2);

    printf("b = %d\n", b);
}