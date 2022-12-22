//Write a program to create a single linked list having 5 nodes. In each of the nodes the data part will be containing your name, roll and branch.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    char st[20];
    struct node *next;
};
struct node *head ;
void add(char arr[])
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    int i=0 ;
    while(arr[i]!='\0')
    {
        newnode->st[i]=arr[i];
        i++;
    }

  if(head==NULL)
  {
    head= newnode;
    head->next = NULL;
  }
  else{
    struct node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
  }
}
void display()
{
    struct node *temp = head;
    while(temp->next!=NULL)
    {
        printf("%s->",temp->st);
        temp = temp->next;
    }
   printf("%s",temp->st);

}
int main()
{
    char ar={'R' , 'I' , 'Y' , 'A'  '\0'};
    add(ar);
    add("Jha");
    add("21052466");
    add("CSE");
    add("Sec:6");
    display();
}