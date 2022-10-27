#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
node *deleteatend(node *start)
{ 
    node *ptr=start , *prep=start->next;
    if(start==NULL)
    {
        printf("List is empty");
    }
    else if(start->next=NULL)
    {
        free(start);
        start=NULL;
    }
    else
    {
        while(prep->next!=NULL)
        {
          ptr=ptr->next;
          prep=prep->next;
        }
        ptr->next=NULL;
        free(prep);
    }
   return start;

}
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
   
     deleteatend(start);
    p=start;
    while(p!=NULL)
    {
        printf("\t%d",p->data);
        p=p->next;
    }
    return 0;
}