#include <stdlib.h>
#include <stdio.h>


typedef struct Node
{
    int info;
    struct Node* pNext;
} Node;

Node* pFirst;
Node* pLast;
void print_list(){
    if (pFirst == NULL)
    {
        printf("Lista vuota");
        return;
    }

    Node* pScan = pFirst;
    do{
        printf("Info = %d\n", pScan -> info);
        pScan = pScan->pNext;
    }while(pScan!=NULL);

    return;
}


void head_insert(void){
    Node *pNew = (Node*) malloc(sizeof(Node));
    printf("Inserire info:\n");
    scanf("%d", &(pNew->info));
    pNew->pNext = NULL;
    if (pFirst==NULL)
    {
        pFirst = pNew;
    }else{
        pNew->pNext = pFirst; //l'indirizzo del primo elemento diventa l'indirizzo seguente del nuovo elemento
        pFirst = pNew; //l'elemento del nuovo elemento diventa il nuovo indirizzo inizale
    }
    

}

void head_delete(){
    if (pFirst == NULL)
    {
        printf("Lista vuota!");
    }else{
        Node* temp = pFirst -> pNext; //si salva l'indirizzo del secondo elemento
        free(pFirst); //si libera lo spazio di memoria del primo elemento
        pFirst = temp; //il secondo elemento diventa il primo
    }
    return;
}

void tail_insert(){
    Node *pNew = (Node*) malloc(sizeof(Node));
    scanf("%d", &(pNew->info));
    pNew -> pNext = NULL;

    if(pFirst == NULL){
        pFirst = pNew;
        pLast = pNew;
    }else{
        pLast->pNext = pNew; //si aggiunge in coda il nuovo elemento
        pLast = pNew; //e questo diventa l'ultimo
    }

    return;
}

void tail_delete(){
    if (pFirst == NULL)
    {
        printf("La lista è vuota!\n");
    }else{
        Node* pPrev = NULL;
        Node* pScan = pFirst;
        if(pScan->pNext == NULL)
        {
            free(pScan);
            pFirst = NULL;
        }else{
            do{
                pPrev = pScan;
                pScan = pScan->pNext; 
            }while(pScan->pNext != pLast);
            free(pPrev->pNext);
            pLast = pPrev;
        }
        
    }
    
}

int main(){
    head_insert();
    head_insert();
    head_insert();
    print_list(pFirst);
}