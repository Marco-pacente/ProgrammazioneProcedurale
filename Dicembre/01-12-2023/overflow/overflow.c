#include <stdio.h>

int cont;

void f1();

void f2(){
    printf("%d\n", cont++);
    int a = 0;
    f1();
}

void f1(){
    printf("%d\n", cont++);
    int b = 0;
    f2();
}

int main(){
    f1();
}