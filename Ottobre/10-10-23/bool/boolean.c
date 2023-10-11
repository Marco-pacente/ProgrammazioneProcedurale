#include <stdio.h>
#include <stdbool.h>
#define BOOL char //così si fa la stessa cosa
#define TRUE 1
#define FALSE 0
int main(){
    bool booleano = true; //in realtà è un modo per girarci attorno per farlo sembrare più ordinato
    char veroBooleano = 1; //è la stessa cosa
    BOOL booleanoDiverso = TRUE;
    if (booleano)
    {
        printf("quello di stdbool funziona\n");
    }
    
    if (veroBooleano)
    {
        printf("anche quello nativo di c con i caratteri funziona\n");
    }
    
    if (booleanoDiverso)
    {
        printf("e anche quello per farlo più ordinato senza stdbool funziona\n");
    }
}