#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int info;
    int info2;
    struct Node* pNext;
} Node;

int main(){
    Node *p = (Node*) malloc(sizeof(Node));
    p->info = 2;
    p->info2 = 3;
    p->pNext = NULL;
}