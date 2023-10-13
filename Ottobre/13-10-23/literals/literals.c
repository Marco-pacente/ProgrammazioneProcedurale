#include <stdio.h>

int main(){
    int a = 4; //4 ha un tipo
    int b = 047;   //con lo 0 davanit viene interpretato come ottale
    printf("stampo il valore di b(047 in teoria): %d\n", b);
    int c = 0x12;//e con 0x viene interpretato come esadecimale
    printf("stampo 0x12: %d\n", c);
}