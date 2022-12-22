/*
6. Write a program that accepts a string and finds its length without using any library
function.*/


#include <stdio.h>
int main()
{
char s[100];
int i,count=0;

printf("Enter a string:");
scanf("%s", s);

for(i = 0; s[i] != '\0';i++)
{
count++;
}

printf("Length of string: %d", count);
return 0;
}