#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50
struct stack
{
    int s[MAXSIZE];
    int top;
};
typedef struct stack ST;
ST a;

void push()
{
    int n;

    if(a.top == (MAXSIZE-1))
    {
        printf("Stack is already full.");
        return; 
    }

    else 
    {
       printf("Enter the elements you wish to push");
       scanf("%d",&n);
       a.top= a.top+1;
       a.s[a.top]=n;

    }
    return;
    
}

int pop()
{
    int n;
    
    if(a.top == -1)
    {
        printf("stack is empty");
        return (a.top);
    }
    else
    {
        n=a.s[a.top]; 
        printf("element which we have popped =%d",a.s[a.top]); 
    }
    return(n);
}

int main()
{
    int swit;
    a.top = -1;

      printf ("\tSTACK OPERATIONS\n");
      printf("1. PUSH\n");
      printf("2. POP\n");
      while(1)
      {printf("\nChoose one option : ");
      scanf("%d", &swit);
      switch (swit){
            case 1:
            push();
           break;
            case 2:
            pop();
            break;
            
        }
      }
      return 0;
}