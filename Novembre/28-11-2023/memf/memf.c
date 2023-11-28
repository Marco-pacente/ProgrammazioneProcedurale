#include <stdlib.h>
#include <stdio.h>

int main(){
    int i = 0;
    while (1)
    {
        int *p = (int*) malloc(1000000000000000);
        i++;
        printf("%d volta\n", i);
        if (p == NULL)
        {
            break;
        }
        
        
    }
}