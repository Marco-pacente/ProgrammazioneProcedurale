#include <stdio.h>
#include <limits.h>
int main(){
    int a = 4; //4 ha un tipo. Probabilmente char. Il compilatore assegna alla costante letterale il primo tipo abbastanza grande da rappresentarla
    int b = 047;   //con lo 0 davanti viene interpretato come ottale
    printf("stampo il valore di b(047 in teoria): %d\n", b);
    int c = 0x12;//e con 0x viene interpretato come esadecimale
    printf("stampo 0x12: %d\n", c);

    int d = 512U;//d è unsigned;
    int f = 2.5E10; //2.5 moltiplicato per 10 alla decima
    float v = 5.6f; //5.6 è float 
    float l = 5.6; // ora invece è double;

    char apice = '\'';
    char backslash = '\\';

}