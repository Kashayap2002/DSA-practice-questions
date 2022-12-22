//Write a program to design push and pop operation in stack.
#include<stdio.h>
#include<stdlib.h>
int *s, top=-1, size;
void push(int data)
{
    if(size-top>1)
    {
        s[++top]=data;
    }
    else
    printf("Stack Overflow!");
}
int pop()
{
    if(top==-1)
    {
        printf("Stack Underflow!");
        return -1;
    }
    else
    {
      int ans=s[top];
      top--;
      return ans;
    }
}
void display()
{
    if(top==-1)
    printf("Stack Underflow!");
    else
    {
        int temp=top;
        while (temp>=0)
        {
            printf("%d ", s[temp]);
            temp--;
        }
    }
}
int main()
{
    printf("Enter size of stack ");
    scanf("%d", &size);
    int e;
    s=(int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        printf("Enter element to be pushed \n");
        scanf("%d",&e);
        push(e);
    }
    display();
    int p=pop();
    printf("\n Deleted item from stack %d ", p);
    return 0;
}