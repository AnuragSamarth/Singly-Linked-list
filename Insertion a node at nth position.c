#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    
}node;
node *insertatanyposition(int node_data,int position ,node *start)
{
   node *p , *new_node , *q;
   int i=0;
   p=start;

   while(i<position-1)
   {
    p=p->next;
    i++;
   }
   new_node=(node*)malloc(sizeof(node));
   new_node->data=node_data;
   new_node->next=NULL;

   q=p->next;
   p->next = new_node;
   new_node->next = q;
   
   return start;
}

int main()
{
    int a,i,n,node_data,position;
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
    printf("Enter the value of the new node :");
    scanf("%d",&node_data);
    printf("Enter the position at which you want to place node \n");
    scanf("%d",&position);
    start = insertatanyposition(node_data,position,start);
    p=start;
    while(p!=NULL)
    {
        printf("\t%d",p->data);
        p=p->next;
    }

    return 0;
}


