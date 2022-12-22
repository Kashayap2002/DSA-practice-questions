#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *tail=NULL;
void insertfirst(int x)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = head;
    head = newnode;
    head->prev = NULL;
    tail=newnode;
}
void add(int x)
{
    struct node *newnode = (struct node*)malloc(sizeof(int));
    newnode->data = x;
    if(head==NULL)
    {
       head = newnode;
       head->next = NULL;
       head->prev = NULL;
       return ;
    }

    struct node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
    newnode->prev = temp;
    tail=newnode;
}
int count()
{
struct node *curr = head; int c=0;
while(curr != NULL)
{
c++;
curr = curr->next;
}
return c;
}
void inspos(int x , int p)
{
  struct node *newnode = (struct node*)malloc(sizeof(int));
    newnode->data = x;
    if(p==1)
    {
        insertfirst(x);
        return;
    }   
    if(p==count())
    {
        add(x);
        return;
    }
    struct node *temp = head;
    int c=0;
    while(temp != NULL)
    {
     if(c==p-2)
     {
        break;
     }
     c++;
     temp=temp->next;
    }
    temp->next->prev = newnode;
   newnode->next= temp->next;
   temp->next = newnode;
   newnode->prev = temp;
}
void display()
{
    struct node *temp = head;
    while(temp->next!=NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
  printf("%d",temp->data);
}
void displayrev()
{
    struct node *curr = tail;
    while(curr->prev != NULL)
    {
      printf("%d->",curr->data);
      curr=curr->prev;
    }
    printf("%d",curr->data);
}
int main()
{
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    printf("Predefined linked list made by appending nodes at the end of the list : \n");
    display();
    printf("\nLinked list after inserting element '0' at the beginning:\n");
    insertfirst(0);
    display();
    printf("\nEnter position at which you want to insert node : "); int pos ; scanf("%d",&pos);
    printf("Enter value of node : "); int d; scanf("%d",&d);
    inspos(d , pos);
    printf("\nLinked list after inserting element at specified position:\n");
    display();
    printf("\n");
}