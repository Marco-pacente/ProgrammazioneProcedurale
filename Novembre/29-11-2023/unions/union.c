#include <stdio.h>

union data1 //l'unione può memorizzare un solo campo alla volta
{
    int a; //un intero
    char b; //oppure un carattere
    char c; //o un altro carattere
}; //perchè lo spazio di memoria è uno solo
   //grande quanto il parametro più grande (qui i 4 byte di int a)

struct data2
{
    int a;
    char b;
    char c;
};


int main(){
    union data1 d1;
    struct data2 d2;
    printf("dimensione unione: %ld\n", sizeof(d1));
    printf("dimensione struct: %ld\n", sizeof(d2));
}