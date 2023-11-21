#include <stdio.h>

int main(){
    int arr[5] = {2, 1, 5, 6, 2};
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("%lld\n", (unsigned long long) &arr[i]);
    }
    int *arrPtr = arr;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(arrPtr+i));
    }
    return 0;
}