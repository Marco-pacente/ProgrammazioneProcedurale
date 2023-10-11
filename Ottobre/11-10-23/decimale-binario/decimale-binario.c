#include <stdio.h>
int main(){
    int number;
    char binNumber[8];
    printf("Enter an integer decimal number:");
    scanf("%d", &number);
    printf("Binary (inverted): ");
    for(int i = 7; i >= 0; i--)
    {
        binNumber[i] =  number%2;
        printf("%d", number%2);
        number = number/2;
    }
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%c", binNumber[i]); //vabbè vaffanculo c ci riprovo dopo
    }
    
}