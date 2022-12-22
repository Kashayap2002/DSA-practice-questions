#include <stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter the number of elements :"); /*you want to enter in any array*/
    scanf("%d",&n);

    printf("Enter the elements:\n"); /*you want to enter in the array*/

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n Sorted array:\n");
    for(i=0;i<n;i++)
    {
        for(j=1+i;j<n;j++)
        {
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }

for(i=0;i<n;i++)
{
    printf(" %d\t",a[i]);
}
    return 0;
}