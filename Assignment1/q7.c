#include <stdio.h>

int main()
{
  printf("Enter number of rows for matrix: "); 
  int r ,c,arr[100][100];
  scanf("%d%d",&r,&c);
  

  int i , j ; printf("Enter %d elements:\n",r*c);
  int cr=1; int nz=0; int ts=0;
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf("%d. ",cr++);
          scanf("%d",&arr[i][j]);
          if(arr[i][j]!=0)
          nz++;
      }
  }
  printf("The matrix : \n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf("%d\t",arr[i][j]);
      }
       printf("\n");
  }
   for(i=0;i<r;i++)
  {
      for(j=i+1;j<c;j++)
      {
          
          ts=ts+arr[i][j];
      }
     
  }
  printf("The number of non zero elements: %d\n",nz);
  printf("Sum of elements above leading diagonal is : %d\n",ts);
  printf("Elements below minor diagonal:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(j>c-i-1 && j<=c-1)
            {
                printf("%d\t",arr[i][j]);
            }
            else
            printf("\t");
        }
        printf("\n");
    }
    int p=1; int p2=1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            p=p*arr[i][j];
            if(j==c-i-1)
            p2=p2*arr[i][j];
        }
    }
    printf("Product = %d",p);
    printf("\nProduct of minor diagonal elements = %d",p2);
}