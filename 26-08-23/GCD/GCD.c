#include <stdio.h>
int main(){
    int n1, n2;
    printf("Enter two positive numbers:\t");
    scanf("%d %d", &n1, &n2);

    while (n2 != 0) //ciclo che si ripete finchè la variabile n2 continua a non valere 0
    { //inizio codice da ripetere nel ciclo
        if(n1 > n2){ //condizione
            n1 = n1 - n2; //codice da eseguire se la condizione è vera
        }else{
            n2 = n2 - n1; //codice da eseguire se è falsa
        }
    }//fine codice da ripetere nel ciclo
    printf("GCD = %d \n", n1); //output finale
    return 0;
}