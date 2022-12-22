//2. Write a program to insert a node : 
//(a)Inserting at Begining 

#include <stdio.h>
#include <stdlib.h>


struct node{
int data;
struct node* next;
};

struct node* head;

void insert_node(int data){

struct node* newnode = (struct node*)malloc(sizeof(struct node*));

newnode->data = data;
newnode->next = head;
head = newnode;

}
void print()

{
struct node* p;
p = head;
while(p != NULL)
{
printf("%d\n",p->data);
p=p->next;
}
}
int main()
{

head = NULL;

insert_node(1);
insert_node(2);
insert_node(5);
insert_node(4);

print();
return 0;
}