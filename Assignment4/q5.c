//WAP to allocate memory to a 2D matrix, take user input and print its elements.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int r,c,i,j;
	printf("Enter rows and column :\n");
	scanf("%d%d",&r,&c);
	int* ptr = malloc((r * c) * sizeof(int));
for (i = 0; i < r * c; i++)
		ptr[i] = i + 1;

	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++)
			printf("%d ", ptr[i * c + j]);
		printf("\n");
	}
	free(ptr);
	return 0;
}

