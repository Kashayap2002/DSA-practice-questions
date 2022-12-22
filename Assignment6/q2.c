#include<stdio.h>
#include<stdlib.h>
#define MAX 3

typedef struct
{
    int *arr;
    int front;
    int rear;
}queue;

void init(queue *q)
{
    q->arr = (int *)calloc(MAX,sizeof(int));
    q->front = q->rear = -1;
}

void enqueue(queue *q)
{
    
    if(q->rear == MAX-1)
    {
        realloc(q->arr, MAX+1);
        printf("Enter element: ");
        q->rear++;
        scanf("%d", &q->arr[q->rear]);
    }
    else if(q->front == -1)
    {
        q->front = q->rear = 0;
        q->arr = (int *)calloc(MAX,sizeof(int));
        printf("Insert element: ");
        scanf("%d", &q->arr[q->front]);
        return;
    }
    else
    {
        q->rear++;
        printf("Enter  element: ");
        scanf("%d", &q->arr[q->rear]);
        return;
    }
}

void dequeue(queue *q)
{
    if(q->front == -1)
    {
        printf("Underflow.\n");
    }
    else if(q->front == q->rear)
    {
        free(q->arr);
        q->arr = NULL;
        q->front = q->rear = -1;
    }
    else
    {
        q->front++;
    }
}

void display(queue q)
{
    if(q.front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        for(int i = q.front; i<=q.rear; i++)
        {
            printf("%d, ", q.arr[i]);
        }
    }
}

int main()
{
    queue Q;
    init(&Q);

    for(int i = 0;  i<3; i++)
    {
        enqueue(&Q);
    }

    display(Q);

    printf("\n");
    enqueue(&Q);
    display(Q);

    printf("\n");
    dequeue(&Q);
    display(Q);
}