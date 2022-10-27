#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    
}node;
node *deleteatanyposition(int position ,node *start)
{
   node *p  , *q;
   int i=0,a;
   p=start;

   while(i<position-1)
   {
    p=p->next;
    i++;
   }
   q=p->next;
   p->next=q->next;
   free(q);
   return start;

}
int main()
{
    int a,i,node_data,position,n;
    node *p, *q, *start;
    printf("Enter the total nodes \n");
    scanf("%d",&n);
    printf("Enter the value of head node \n");
    p=(node*)malloc(sizeof(node));
    scanf("%d",&a);
    p->data=a;
    p->next=NULL;
    start=p;
    for(i=0;i<n;i++)
    {
        printf("Enter the value of next node \n");
        q=(node*)malloc(sizeof(node));
        scanf("%d",&a);
        q->data=a;
        q->next=NULL;
        p->next=q;
        p=p->next;
    }
    printf("Enter the position at which you want to delete node \n");
    scanf("%d",&position);
    start = deleteatanyposition(position,start);
    p=start;
    while(p!=NULL)
    {
        printf("\t%d",p->data);
        p=p->next;
    }
    return 0;
}

    