#include <stdio.h>
#include <limits.h>
int main(){
    int a = INT_MAX;
    printf("%d\n", a);
    printf("%d", a+1);
    printf("\n-----------------------\n");
    printf("%d\n", __INT_MAX__);
}