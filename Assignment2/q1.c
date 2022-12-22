/*1. Write a program that accepts all elements of an integer array and finds out maximum and
minimum element of the array.*/

#include <stdio.h>
int main()
{
    int a[100],n,i,maximum,minimum;
    printf("Enter the number of elements you want to enter in any array:");
    scanf("%d",&n);

    printf("Enter the elements :\n");
    /*you want to enter in the array*/

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    maximum=a[0];
    minimum=a[0];
    for(i=1;i<n;i++)
    {
        if(maximum /*a[0]*/ <a[i])
        {
           maximum/*a[0]*/=a[i];
        }
      
        if(minimum /*a[0]*/ >a[i])
        {
           minimum /*a[0]*/=a[i];
        }

    }

    printf("\nmaximum element is:%d",maximum);

    printf("\nminimum element is:%d",minimum);

    return 0;

}