#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter two positive numbers:\t");
    scanf("%d %d", &n1, &n2);

    while (n2 != 0)
    {
        if(n1 > n2){
            n1 = n1 - n2;
        }else{
            n2 = n2 - n1;
        }
    }
    printf("GCD = %d \n", n1);
    return 0;
}