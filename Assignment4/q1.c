//1. Write a function using pointers to add two matrices and to return the resultant matrix to the calling function.
#include<stdio.h>
#define max 10

int a[max][max],b[max][max],r,col;
void add(int(*)[max]);

void add(int c[max][max])
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<col;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}
}

int main()
{
int c[max][max],i,j;
printf("Enter row :" );
scanf("%d",&r);
printf("Enter column :");
scanf("%d",&col);
printf("Enter matrix A:\n");
for(i=0;i<r;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter matrix B :\n");
for(i=0;i<r;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&b[i][j]);
}
}

add(c);
printf("Addition :\n");

for(i=0;i<r;i++)
{
for(j=0;j<col;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
return 0;
}

