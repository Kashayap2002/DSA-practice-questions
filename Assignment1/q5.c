#include <stdio.h>
int main()
{
    int a[100],n,i,m,b,count=0;
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
    
   printf("\nEnter lower limit element & upper limit element respectively: ");
   scanf("%d %d",&m,&b);
    
   for(i=0;i<n;i++)
    { 
         if(a[i]==m || a[i]==b)
         {
            count++;
         }
        if(a[i]>m && a[i]<b)
        {
            count++;
        }
    }

    printf("Number of elements in between two elements = %d",count);
    return 0;
}