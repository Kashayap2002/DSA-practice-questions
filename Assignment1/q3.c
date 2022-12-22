#include <stdio.h>
int main()
{
    int a[100],n,i,x,count=0;
    printf("Enter the number of elements you want to enter in any array:");
    scanf("%d",&n);

    printf("Enter the elements you want to enter in the array:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("Enter the number you want to search:");
    scanf("%d",&x);

     for(i=0;i<n;i++)
    {
        if(x==a[i])
        {printf("%d has appeared at position %d in the array.\n",x,i+1);
            count++;}
    }
    printf("%d  is present %d times in the array",x,count);
    
   return 0;
}