#include <stdio.h>
int main(){
    int firstNumber, secondNumber, sumOfTwoNumbers; //dichiarazione variabili di tipo intero
    
    printf("Enter two numbers:\t");

    scanf("%d %d", &firstNumber, &secondNumber); //input da tastiera dei due numeri. Con %d si indica che i due numeri sono interi

    sumOfTwoNumbers = firstNumber + secondNumber; //assegnazione alla variabile sumOfTwo numbers il valore della somma dei due interi

    printf("%d + %d = %d \n", firstNumber, secondNumber, sumOfTwoNumbers); //output del risultato. Qui i %d indicano dei segnaposto per i numeri interi
    return 0;
}