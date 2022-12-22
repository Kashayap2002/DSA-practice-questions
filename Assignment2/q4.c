/*4. Write a program that accepts all elements of an integer array and finds out mean and
standard deviation of the array.
*/

#include <stdio.h>
#include <math.h>

int main()

{
    int a[100],n,i,sum=0;      //variance,sd,difference,add=0;
    float avg,variance,sd,difference,add=0;
    
    printf("Enter the number of elements :"); //you want to enter in any array
    scanf("%d",&n);

    printf("Enter the elements :\n"); //you want to enter in the array

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

    printf("\nMean of elements:");
    for(i=0;i<n;i++)
    {
        avg= (sum)/(n);
    }
    printf("%f",avg);


   // printf("\n Standard deviation:");
    for(i=0;i<n;i++)
    {
     
      difference=a[i]-avg;
      add = add+ pow(difference,2);

        
    }
    variance= (add)/(n);
    printf("\nvariance=%f",variance);
      
    sd= sqrt(variance);
    printf("\nstandard deviation=%f",sd);
    
    
    return 0;
}