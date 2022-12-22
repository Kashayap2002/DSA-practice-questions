/*
5. Write a program that accepts two integer arrays, add them and store them in a third
array.
*/


#include <stdio.h>
int main()
{
    int a[100],b[100],sum[100],n,i;
    printf("Enter the number of elements you want to enter:");
    scanf("%d",&n);

    printf("Enter the elements for array 1:\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Array 1:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nEnter the elements for array 2 :\n");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    printf("\nArray 2:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }

    printf("\nSum:\n");

    for(i=0;i<n;i++)
    {   

        sum[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
	{
		printf("%d\t",sum[i]);	
	}
    
    return 0;

}