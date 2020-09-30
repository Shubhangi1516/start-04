#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void insert(int data,int n)
{
    int i;
    head=NULL;
    struct node *temp2,*temp1=(struct node*)malloc(sizeof(struct node));
    temp1->data=data;
    temp1->next=NULL;
     if(n==1)
     {
         temp1->next=head;
         head=temp1;
     }
     temp2=head;
     for(i=0;i<n-2;i++)
     {
         temp2=temp2->next;
     }
     temp1->next=temp2->next;
     temp2->next=temp1;

}
void print()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main()
{
    head=NULL;
    insert(100,1);
    insert(200,2);
    insert(300,3);
    print()
    return 0;
}

