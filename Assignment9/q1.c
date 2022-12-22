/*WAP to implement a queue with the following criteria: 
i) let there are 2 fixed size array for implementation of queue . one array used for inserting even element and one for inserting odd element 

ii) if an even element comes and even element array  is full . Then add the elemnt at the rear element of the odd element q .*/

#include <stdio.h>
int eq[20],oq[20];
int fe=-1,re=-1,fo=-1,ro=-1;
int enqueue(int x)
{
    if(x%2)
    {
        if(ro==20 && re!=20)
        {
            printf("Stored in even queue\n ");        
            eq[re++]==x;
        }
        else if(ro==20 && re==20)
        printf("Both queues are full\n");
        else
        oq[ro++]=x;
    }
    else
    {
        if(re==20 && ro!=20)
        {
            printf("Stored in odd queue\n");
            oq[ro++]==x;
        }
        else if(ro==20 && re==20)
        printf("Both queues are full\n");
        else 
eq[re++]=x;
    }
}
int dequeue()
{
    int c;
    printf("Select 1.even or 2.odd queue\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
            return eq[++fe];
            break;
        }
        case 2:
        {
            return oq[fo++];
            break;
        }
    }
}
void display()
{
    int c,i;
    printf("Select 1.even or 2.odd queue\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
            printf("Elements of even queue are=");
            for(i=fe;i<re;i++)
            printf("%d",eq[i]);
            break;
        }
        case 2:
        {
            printf("Elements of odd queue are=");
            for(i=fo;i<ro;i++)
            printf("%d",oq[i]);
            break;
        }
    }
}
void main()
{
    int c=1,x;
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
            }}}}
