#include <stdio.h>
int sum(int a, int b){
    return a + b;
}
int main(){
    int a = 0;
    a = sum(4, 5);
    printf("4 + 5 = %d\n", a);
}
