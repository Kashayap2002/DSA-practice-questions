//WAP to implement queue using stack
#include <stdio.h>
#include <stdlib.h>
 
void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void create();
 
int st1[100], st2[100];
int top1 = -1, top2 = -1;
int count = 0;
 
void main()
{
    int ch;
 
    printf("\n1 - Enqueue element int o queue:");
    printf("\n2 - Dequeu element from queue:");
    printf("\n3 - Display from queue:");
    printf("\n4 - Exit");
    create();
    while (1)
    {
        printf("\nEnter choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice");
        }
    }
}
 

void create() //create a queue
{
    top1 = top2 = -1;
}
 

void push1(int data) //push the element on to the stack
{
    st1[++top1] = data;
}
 

int pop1()// pop the element from the stack
{
    return(st1[top1--]);
}
 

void push2(int data) //push an element on to stack
{
    st2[++top2] = data;
}

 
int pop2() //pop an element from the stack
{
    return(st2[top2--]);
}
 

void enqueue() //add an element into the queue using stack
{
    int data, i;
 
    printf("Enter data into queue");
    scanf("%d", &data);
    push1(data);
    count++;
}
 

 
void dequeue() // delete an element from the queue using stack
{
    int i;
 
    for (i = 0;i <= count;i++)
    {
        push2(pop1());
    }
    pop2();
    count--;
    for (i = 0;i <= count;i++)
    {
        push1(pop2());
    }
}
 
 
void display() //display the elements in the stack
{
    int i;
 
    for (i = 0;i <= top1;i++)
    {
        printf(" %d ", st1[i]);
    }
}
