/*7. Write a program that adds two matrices and store the result in a third matrix.
*/
#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,n,row,col;
    
    printf("Enter elements for matrix 1:");
    for(row=1;row<=3;row++)
    {
        for(col=1;col<=3;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    
    
    printf("Enter elements for matrix 2:");
    for(row=1;row<=3;row++)
    {
        for(col=1;col<=3;col++)
        {
            scanf("%d",&b[row][col]);
        }
    }
     
     
    for(row=1;row<=3;row++)
    {
        for(col=1;col<=3;col++)
        {
            c[row][col]=a[row][col]+b[row][col];
        }
    }
    
    printf("Sum of two matrices:\n");
    for(row=1;row<=3;row++)
    {
        for(col=1;col<=3;col++)
        {   
            printf("%d",c[row][col]);
            
        }
        printf("\n");
    }
   return 0;
}