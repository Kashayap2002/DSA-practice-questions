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
void deletefirst()
{
   head = head->next;
   head->prev = NULL;
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
void del()
{
 struct node *temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
  temp->next = NULL;
  tail = temp;
}
void delpos(int p)
{
 
    if(p==1)
    {
        deletefirst();
        return;
    }   
    if(p==count())
    {
        del();
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
   temp->next = temp->next->next;
   temp->next->prev = temp;
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

int main()
{
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    add(6);
    add(7);
    printf("Predefined linked list made by appending nodes at the end of the list : \n");
    display();
    printf("\nLinked list after deleting element  at the beginning:\n");
    deletefirst();
    display();
    printf("\nLinked list after deleting element  at the end:\n");
    del();
    display();
    printf("\nEnter position at which you want to delete node : "); int pos ; scanf("%d",&pos);
    delpos(pos);
    //printf("\nLinked list after deleting element at specified position:\n");
    display();
    printf("\n");
}