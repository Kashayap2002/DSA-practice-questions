#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head=NULL;
void push(int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void pop()
{
    struct Node *temp;
    if(head == NULL)
    printf("Stack is Empty\n");
    else
    {
        printf("Deleted element = %d ", head->data);
        printf("\n");
        temp = head;
        head = head->next;
        free(temp);
    }
}
void Display()
{
    struct Node *temp = head;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    push(10);
    push(99);
    push(9);
    Display();
    pop();
    pop();
    Display();
    return 0;
}
