#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void deletefirst()
{
    
    head = head->next;
}
void add(int x)
{
    struct node *newnode = (struct node*)malloc(sizeof(int));
    newnode->data = x;
    if(head==NULL)
    {
       head = newnode;
       head->next = NULL;
       return ;
    }

    struct node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
}
void delend()
{
 struct node *temp = head;
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
  temp->next = NULL;
}
void delpos(int p)
{
  
    if(p==1)
    {
        deletefirst();
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
        temp = temp->next;
    }
    temp->next =temp->next->next;
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
    printf("Predefined linked list made by appending nodes at the end of the list : \n");
    display();
    printf("\nLinked list after deleting element  at the beginning:\n");
    deletefirst();
     printf("\nLinked list after deleting element  at the end:\n");
    delend();
    display();
    printf("\nEnter position at which you want to delete node : "); int pos ; scanf("%d",&pos);
    delpos( pos);
    printf("\nLinked list after deleting element at specified position:\n");
    display();
}