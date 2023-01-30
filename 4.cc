#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*tail;
void insert()
{
    int i,n;
    printf("How Many Linked List You Want......\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data.....\n");
        scanf("%d",&newnode->data);
        if(head==NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->next=head;
            tail = tail -> next;
        }
    }
}
void display()
{
    struct node *it=head;
    while(it->next!=head)
    {
        printf("%d ",it->data);
        it=it->next;
    }
    printf("%d ",it->data);
}
int main()
{
    insert();
    display();
}
