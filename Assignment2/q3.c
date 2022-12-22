/*
3. Write a program that generated the first 10 Fibonacci numbers and store them into an
array of size 10.*/

#include <stdio.h>

int main()
{       int f[10];
        int i;

        f[0] = 0;
        f[1] = 1;

        for(i = 2; i < 11; i++)
                {f[i] = f[i-1] + f[i-2];}
        
        printf("The first 10 Fibonacci numbers:");
        for (i = 0; i < 11; i++)
             {   printf("%d\t\t", f[i]);
             }
             return 0;
}