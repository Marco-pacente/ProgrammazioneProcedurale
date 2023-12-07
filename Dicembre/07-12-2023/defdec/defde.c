#include <stdio.h>

extern int a; //dichiarazione (perchè c'è già a esterno in deflib.c)

int main(int argc, char const *argv[])
{
    printf("a:%d\n", a);
    return 0;
}
