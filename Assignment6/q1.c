#include<stdio.h>
#define MAX 30

typedef struct
{
    int arr[MAX];
    int front;
    int rear;
}queue;

void init(queue *q)
{
    q->front = q->rear = -1;
}

void enqueue(queue *q)
{
    if(q->rear == MAX)
    {
        printf("Overflow.\n");
        return;
    }
    else if(q->front == -1)
    {
        q->front = 0;
        q->rear = 0;
        printf("Enter element: ");
        scanf("%d", &(q->arr[q->front]));
        q->rear++;
    }
    else
    {
        printf("Enter element: ");
        scanf("%d", &(q->arr[q->rear]));
        q->rear++;
    }
}

void dequeue(queue *q)
{
    if(q->front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    else if(q->front == q->rear)
    {
        q->front = q->rear = -1;
        return;
    }
    else{
        q->front++;
        return;
    }
}

void display(queue q)
{
    if(q.front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    else
    {
        for(int i = q.front; i<q.rear; i++)
        {
            printf("%d, ", q.arr[i]);
        }
    }
}

int main()
{
    queue q;
    init(&q);
    
    for(int i = 0; i<5; i++)
    {
        enqueue(&q);
    }

    display(q);

    printf("\n");
    dequeue(&q);
    display(q);

    printf("\n");
    dequeue(&q);
    display(q);
    
    printf("\n");
    dequeue(&q);
    display(q);
}