#include <stdio.h>
int main()
{
    int a[100],n,i,largest,smallest;
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
    largest=a[0];
    smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(largest /*a[0]*/ <a[i])
        {
           largest /*a[0]*/=a[i];
        }
      
        if(smallest /*a[0]*/ >a[i])
        {
           smallest /*a[0]*/=a[i];
        }

    }

    printf("\nlargest element is:%d",largest);

    printf("\nlargest element is:%d",smallest);

}