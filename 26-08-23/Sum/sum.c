#include <stdio.h>
int main(){
    int firstNumber, secondNumber, sumOfTwoNumbers;
    
    printf("Enter two numbers:\t");

    scanf("%d %d", &firstNumber, &secondNumber);

    sumOfTwoNumbers = firstNumber + secondNumber;

    printf("%d + %d = %d \n", firstNumber, secondNumber, sumOfTwoNumbers);
    return 0;
}