#include <stdio.h>

int main(){
    char s;
    printf("inserire il genere:");
    scanf("%c", &s);
    switch (s)
    {
    case 'm':
        printf("maschio\n");
        break;
    case 'f':
        printf("femmina\n");
        break;
    default:
        printf("non specificato");
        break;
    }
}