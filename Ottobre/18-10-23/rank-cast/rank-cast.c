#include <stdio.h>

int main(){
    char a = 30, b = 40, c = 12; //le costanti letterali sono int ma vengono convertite a char 
    char d = (a * b) / c; //nelle operazioni i char vengono convertiti in int.
    //"integer promotion"
    // Per questo si può fare a*b
    printf("%d", d);

    return 0;
}