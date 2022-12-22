/*2. Write a program that accepts all elements of an integer array and finds out sum and
average among the values.*/

#include <stdio.h>
int main()
{
    int a[100],n,i,sum=0,avg;
    printf("Enter the number of elements :"); //you want to enter in any array
    scanf("%d",&n);

    printf("Enter the elements:\n"); //you want to enter in the array

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
   
    printf("\nSum of elements:");
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);

    printf("\nAverage of elements:");
    for(i=0;i<n;i++)
    {
        avg= (sum)/(n);
    }
    printf("%d",avg);


    
    return 0;
}