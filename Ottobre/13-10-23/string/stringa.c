#include <stdio.h>

int main(){
    char ciao[] = "Hello world!\n"; //string literal. Non si vede ma finisce con \0
    printf("%s", ciao);

    char interrupt[] = "Hello wor\0ld!\n"; //qui c'era un \0 quindi si interrompe prima
    printf("%s\n", interrupt);
    
    char noEnd[4] = "Ciao";
    printf("%s", noEnd);
}