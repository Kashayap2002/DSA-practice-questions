/*
9. Write a program to read a matrix and check it for Identity Matrix.
*/
#include <stdio.h>
int main()
{   
    int r,c,i,j,a[100][100],k=1;
    printf("Enter the number of rows and column for any square matrix:");
    scanf("%d %d",&r,&c);
    
    printf("Enter the elements for square matrix");
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
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=1 && a[j][i]!=0)
            k=0;
            break;
        }
        
    }
    if(k==1)
    {
        printf("The entered matrix is an identity matrix.");
    
    }
    else
    {
        printf("The entered matrix is not an identity matrix.");
    }
     return 0;

}