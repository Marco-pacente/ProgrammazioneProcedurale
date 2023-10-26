#include <stdio.h>

int main()
{
    int a = 3, b = 6, c = 12;
    printf("a+b*c = %d\n", a+b*c); 
    printf("a+(b*c) = %d\n", a+(b*c)); //a+b*c = a+(b*c)
    //il * ha la priorità
    printf("a/b/c = %d\n", a/b/c); //si procede da destra a sinistra (a/(b/c))
}