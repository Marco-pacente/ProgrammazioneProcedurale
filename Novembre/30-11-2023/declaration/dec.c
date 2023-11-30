#include <stdio.h>

extern int x; //dichiarazione (questa variabile non è definita in questo file)
extern int ciao(); 
// ↑ ancora meglio: funzione definita in altro file
//se poi si compila con il flag -c si compila solo questo file
//"compila" nel senso che si controllano errori, non si crea un eseguibile
//cioè, si crea ma non si può effettivamente eseguire

int somma(int a, int b); //dichiarazione

int main(){
    int a = 5; //definizione
    printf("%d\n", somma(a, 3));
    ciao();
}


int somma(int a, int b) //definizione
{
    return a + b;
}