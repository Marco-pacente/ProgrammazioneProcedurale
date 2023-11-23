#include <stdio.h>
#include <limits.h>
#define N 2000000

void fun(int arr[], size_t n){
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    printf("fatto\n");
}

int main(){
    int array[N];
    fun(array, N);
    for (size_t i = 0; i < N; i++)
    {
        printf("%d\n", array[i]);
    }
    
}