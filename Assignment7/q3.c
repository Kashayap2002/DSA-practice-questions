//WAP to implement two stacks in an array
#include <stdio.h>
#include <stdlib.h>
	int* arr;
	int size;
	int top1, top2;
	void push1(int data)
	{
		if (top1 < top2-1) {
			top1++;
			arr[top1] = data;
		}
		else {
			printf("Overflow\n");
		}
	}
	void push2(int data)
	{
		if (top1 < top2-1) {
			top2--;
			arr[top2] = data;
		}
		else {
			printf("Overflow\n");
		}
	}
	int pop1()
	{
		 if (top1 >= 0) {
			int x = arr[top1];
			top1--;
			return x;
		}
		else {
			printf("Underflow\n");
			return -1;
		}
	}
	int pop2()
	{
		if (top2<size) {
			int x = arr[top2];
			top2++;
			return x;
		}
		else {
			printf("Underflow");
			return -1;
		}
	}
int main()
{
    int x;
    printf("Enter size of array :");
    scanf("%d", &size);
    top1=-1;
    top2=size;
    arr=(int*)malloc(size*sizeof(int));
	printf("Enter elements of first stack \n");
    for (int i=0;i<(size/2); i++)
    {
        scanf("%d", &x);
        push1(x);
    }
    printf("Enter elements of second stack \n");
    for (int i=(size/2 +1);i<size; i++)
    {
        scanf("%d", &x);
        push2(x);
    }
    printf("Element popped from stack1 %d ", pop1());
    printf("\nElement popped from stack2 %d ", pop2());
	return 0;
}