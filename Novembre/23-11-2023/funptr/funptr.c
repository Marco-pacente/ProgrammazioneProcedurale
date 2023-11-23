#include <stdio.h>

int main(){
    int (*pfunc) (const char*) = puts;
    (*pfunc) ("Hello");
}