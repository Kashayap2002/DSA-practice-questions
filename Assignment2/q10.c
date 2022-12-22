/*
10. Write a program that finds out the transpose of a square matrix and store it in the same
array.
*/
#include <stdio.h>
int main()
{   
    int r,c,i,j,a[100][100],k;
    printf("Enter the number of rows and column for any matrix:");
    scanf("%d %d",&r,&c);
    
    printf("Enter the elements for (%dX%d) matrix",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<i;j++)
        {
            k=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=k;
        }
      
    }
    printf("The transpose of the matrix is\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
      
    }

    
     return 0;

}