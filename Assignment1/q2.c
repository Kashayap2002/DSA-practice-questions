#include <stdio.h>
int main()
{
    int a[100],n,i;
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
    
    printf("\nReversed order:\n");

    
for(i=n-1;i>=0;i--)
    {
        printf(" %d\n",a[i]);
    }
    return 0;
}