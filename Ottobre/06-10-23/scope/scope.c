#include <stdio.h>
int a = 5; //variabile "globale" (scope a livello di tutto il file)
int main(){
    int b = 3;
    printf("%d+%d = %d\n", a, b, a+b);
}