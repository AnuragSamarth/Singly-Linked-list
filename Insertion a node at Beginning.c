#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
int main()
{
    int a,i,n;
    node *p , *q , *start;
    printf("Enter the number of node :\n");
    scanf("%d",&n);
    printf("Enter value of head node \n");
    
    p=(node*)malloc(sizeof(node));
    scanf("%d",&a);
    p->data=a;
    p->next=NULL;
    start=p;
    for(i=0;i<n;i++)
    {
        printf("Enter the value of next node \n");
        scanf("%d",&a);
        q=(node*)malloc(sizeof(node));
        q->data=a;
        q->next=NULL;
        p->next=q;
        p=p->next;
    }  
    printf("Enter the value of new node \n");
    scanf("%d",&a);
    node*Ptr=( node*)malloc(sizeof(node));
    Ptr->next=start;
    Ptr->data=a;
    start=Ptr;
     while(Ptr!=NULL)
    {
        printf("\t%d",Ptr->data);
        Ptr=Ptr->next;
    }
    return 0;
}
