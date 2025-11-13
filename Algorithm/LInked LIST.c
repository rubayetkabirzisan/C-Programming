#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
struct node *head;
void printList()
{
    if(head==NULL)
        return;
    struct node * temp = head;
    while(temp!=NULL)
    {
        printf("%d ->",temp->value);
        temp=temp->next;
    }
    printf("\nEnd (for now!)\n");

}
void insertHead(int num)
{
    struct node *newitem;
    newitem = (struct node *)malloc(sizeof(struct node ));
    newitem->value=num;
    newitem->next=NULL;
    newitem->next=head;
    head=newitem;

}

void insertTail(int num)
{
    struct node *newitem;
    newitem = (struct node *)malloc(sizeof(struct node ));
    newitem->value=num;
    newitem->next=NULL;

    struct  node *prev=head;
    while(prev->next!=NULL)
    {
        prev=prev->next;
    }
    newitem->next=prev->next;
    prev->next=newitem;

}

void insertatPosition(int val,int pos)
{
    struct node *newitem;
    newitem = (struct node *)malloc(sizeof(struct node ));
    newitem->value=val;
    newitem->next=NULL;

    struct  node *prev=head;
    for(int i=0; i<pos-1; i++)
    {
        prev=prev->next;
    }
    newitem->next=prev->next;
    prev->next=newitem;

}
void insertAfterValue(int val,int pos)
{
    struct node *newitem;
    newitem = (struct node *)malloc(sizeof(struct node ));
    newitem->value=val;
    newitem->next=NULL;

    struct  node *prev=head;
    while(prev->value!=val)
    {
        prev=prev->next;
    }
    newitem->next=prev->next;
    prev->next=newitem;
}
int main ()
{
    head=NULL;
    while(1)
    {
        int num,pos,ch,val;
        printf("1.Insert First\n2.Insert Last\n3.Insert Middle (Any other pos)\n4.Insert After a Target Val\n5.Print\n");
        scanf("%d",&ch);
        if(ch==1)
        {
            printf("\nEnter val to insert: ");
            scanf("%d", &num);
            insertHead(num);
        }
        else if (ch==2)
        {
            printf("\nEnter val to insert: ");
            scanf("%d", &num);
            insertTail(num);
        }
        else if (ch==3)
        {
            printf("\nEnter val to insert: ");
            scanf("%d", &num);
            printf("\nEnter Position to insert: ");
            scanf("%d", &pos);
            insertatPosition(num, pos);
        }

        else if(ch==4)
        {
            printf("\nEnter val to insert: ");
            scanf("%d", &num);
            printf("\nEnter Value to insert after: ");
            scanf("%d", &val);
            insertAfterValue(num, val);
        }
        else if(ch==5)
        {
            printList();
        }
        else
        {
            printf("\n\n\t\tProgram Terminated\n\n");
            break;
        }
    }
    return 0;
}
