/*
8. Write a program that multiplies two matrices and store the result in a third matrix.
*/
#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],n,i,j,k,sum;
    printf("Enter elements of first matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("matrix 1:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter elements of second matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("matrix 2:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        { 
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
            
        }
       
    }
    
    printf("matrix 3(multiplication of matrix 1 and matrix 2):\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    

    
return 0;
}