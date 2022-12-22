#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        ans=-1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                ans=arr[j];
                break;
            }
        }
        printf("The next greater element of %d is %d\n",arr[i],ans);
    }
}