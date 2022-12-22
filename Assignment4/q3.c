//WAP to create an array of N elements, where the value of N is given by the user, and then print the sum of all the elements of the array.
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int i, n, sum = 0;
	int *x;
 
    printf("Enter the size of array : \n");
	scanf("%d", &n);
 
    x= (int *) malloc(n * sizeof(int));
 
    printf("Enter Elements of the list \n");
	for (i = 0; i < n; i++) 
    {
		scanf("%d", x + i);
	}
    for (i = 0; i < n; i++)
    {
		sum = sum + *(x + i); 
	}
    printf("Sum of all elements in array = %d\n", sum);
    return 0;
}
