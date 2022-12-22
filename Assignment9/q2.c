/*2. WAP to implement circular queue with the following criteria using array : 
i) insertion operation 
ii) if the element is already present in the queue , then that elment become the front element and the previous element becomes the rear element
iii) if element is not present add elements to rear end of the queue*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int x)
{
    int isPresent(int x);
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=rear;
    int a;
    if(!isPresent(x))
    {
        temp=rear->link;
        temp->data=x;
        temp->link=front;
    }
    else
    {
        a=front->data;
        front->data=x;
        rear->data=a;
    }
}
int isPresent(int x)
{
    struct node* i=(struct node*)malloc(sizeof(struct node));
    for(i=front;i->link!=rear;i=i->link)
    if(i->data==x)
    return 1;
    return 0;
}
int dequeue()
{
    int a=front->data;
    rear->link=front->link;
    front=front->link;
    return a;
}
void main()
{
    int c=1,x,l=0;
    while(c)
    {
        printf("Enter 0 to exit 1 to enqueue 2 to dequeue\n");
        scanf("%d",&c);
        switch(c)
        {
 case 1:
            {
                printf("Enter data\n");
                scanf("%d",&x);
                enqueue(x);
                break;
            }
            case 2:
            {
                printf("%d,",dequeue());
                break;
            }
        }
    }
    printf("The queue elements are=");
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=front;
    while(temp!=rear)
    {
        printf("%d,",dequeue);
        temp=temp->link;
}
}