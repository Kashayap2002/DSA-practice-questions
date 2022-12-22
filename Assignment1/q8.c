#include <stdio.h>
int find(int x , int ar[] , int m)
{
    int f=-1;
    for(int i=0;i<m;i++)
    {
        if(ar[i]==x)
        {
            f=i;
            break;
        }
    }
    return f;
}
int main()
{
    printf("Enter the number of elements: "); int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: \n"); int c =1; int max =0;
    for(int i=0;i<n;i++)
    {
        printf("%d. ",c);
        scanf("%d",&arr[i]);
        c++;
    }
    printf("Enter a number: "); int a; scanf("%d",&a);
    printf("Enter another number: "); int b; scanf("%d",&b);
   printf(" distance : %d",abs(find(a,arr,n)-find(b,arr,n))+1);
    
}