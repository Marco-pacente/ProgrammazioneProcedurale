#include <stdio.h>
int main(){
    int number;
    char binNumber[8];
    printf("Enter an integer decimal number:");
    scanf("%d", &number);
    printf("Binary: ");
    for(int i = 7; i >= 0; i--)
    {
        binNumber[i] =  number%2;
        //printf("%d", number%2);
        number = number/2;
    }
}