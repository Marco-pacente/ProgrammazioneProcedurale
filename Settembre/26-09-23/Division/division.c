#include <stdio.h>
int main(){
    int n1, n2, remainder, result;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    result = n1/n2;
    remainder = n1%n2;//calcolo del resto della divisione tra n1 e n2
    printf("%d/%d = %d with remainder %d\n", n1, n2, result, remainder);
    //per ora non provate a dividere per zero. Oppure provateci. Comunque non è che funzioni
}