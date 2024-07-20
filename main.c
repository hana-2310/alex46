


   #include <stdio.h>
#include <stdlib.h>
typedef struct Node Node;
struct Node
{
    int data;
    Node *pNext;
}*pFirst,*pPointer,*pLast;
Node*construct(int value)
{
    Node*N=(Node*)malloc (sizeof(Node));
    if(N)
    {
        N->data=value;
        N->pNext=NULL;


    }
    return N;
}
void insertQueue(int data);

int stack_queue(int data);



int main()
{
   insertQueue  (9);
   insertQueue(7);
   insertQueue (4);
    insertQueue(10);
    insertQueue(2);
    pPointer=pFirst;
    while(pPointer !=NULL){
        printf("%d\n",pPointer->data);
        pPointer=pPointer->pNext;
}
    return 0;
}
void insertQueue(int data)
{

    Node*pN=construct(data);
    if (pN!=NULL)
    {
        if (pFirst==NULL){
          pLast=pFirst=pN;
    }

        pLast->pNext=pN;
        pLast=pN;

    }


}
int queue_pop(int data)
{
    if (pFirst==NULL)
    {
        printf("stack is empty");
            return 0;
    }
    int x=pFirst->data;
    Node*Cur=pFirst;
    pFirst=pFirst->pNext;
    free (Cur);
    return x;




}

