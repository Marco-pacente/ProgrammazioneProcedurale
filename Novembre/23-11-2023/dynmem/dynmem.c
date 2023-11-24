#include <stdio.h>
#include <stdlib.h>

int* crea_array(int n){
    
    int* a = calloc(n, sizeof(int));
    //volendo anche malloc(n * sizeof(int))
    //malloc alloca la dimensione in byte
    //calloc invece in base al tipo degli oggetti e inizializza tutto a zero

    for (int i = 0; i < n; i++)
    {
        *(a+i) = i;
    }
    return a;
}

int main()
{
    int lunghezza = 7;
    int* arr = NULL;
    arr = crea_array(lunghezza);
    for (int i = 0; i < lunghezza; i++)
    {
        printf("%d\n", (arr+i));
    }
    free(arr);
    return 0;
}