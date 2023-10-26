#include <stdio.h>
int main()
{
    int a = 3;
    int b = 0;
    int c;

    c = (a > b ? (a + 1) : (a - 1));

    printf("c = %d\n", c);
}