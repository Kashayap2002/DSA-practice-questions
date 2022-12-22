/*
11. WAP to find and print the sum of diagonals of a 2D Matrix.*/

#include <stdio.h>
int main()
{   
    int r,i,j,a[5][5],sum=0,add=0;
    printf("Enter the number of rows and column for any square matrix:");
    scanf("%d",&r);
    
    printf("Enter the elements for (%dX%d) matrix:",r,r);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
           if(i==j)
           {
            sum =sum+a[i][j];
           }
        }
      
    }
    printf("\nsum of Principal Diagonal/Left Diagonal=%d",sum);
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
           if((i+j)==(r-1))
           {
            add =add+a[i][j];
           }
        }
      
    }
    printf("\nsum of Secondary Diagonal/Right Diagonal=%d",add);

     return 0;

}