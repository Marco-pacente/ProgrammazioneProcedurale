#include <stdio.h>
void myPrintHello(){ //definizione funzione di tipo void (senza valore di ritorno)
	printf("Hello\n");
	return; //ritorno di valore nullo
}
int main(){
	myPrintHello(); //invocazione funzione
	return 0;
}