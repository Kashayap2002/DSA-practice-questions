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
    printf("Predefined doubly linked list made by appending nodes at the end of the list : \n");
    display();
}