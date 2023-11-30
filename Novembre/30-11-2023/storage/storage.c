#include <stdio.h>
int x = 6; //globale quindi statica
int main(){
    auto int a = 5; //viene allocata all'inizio di main e deallocata alla fine
    //ma ormai è già standard così quindi è deprecato
    int b = 1; //in ANSI c anche questa si comporta allo stesso modo di a
    register int r = 2; //si specifica di non mettere la variabile in memoria ma direttamente in un registro della cpu
    //cioè è più veloce
    //int *p = &r; e questo non si può fare perchè r non è in memoria 
    static int s = 5; //viene creata appena il programma parte e deallocata quando il programma finisce
    printf("%d\n", a+b+r+s);
}