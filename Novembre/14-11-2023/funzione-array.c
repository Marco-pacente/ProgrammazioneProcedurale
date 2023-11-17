#include <stdio.h>
#include <string.h>

void stampa(char test[]){
    char test1[10];
    strcpy(test1, test);
    printf("test = %ld\n", strlen(test));
    printf("test1 = %ld\n", strlen(test1));
    return;
}

int main(){
    char a[10] = "ciao";
    stampa(a);
}