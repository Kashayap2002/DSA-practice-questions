#include <stdio.h>
#include <string.h>
struct student
{
    char name;
    
    int roll;
    int marks;
}student1;

int main()
{
    
    printf("Enter name of the student:");
    scanf("%s",&student1.name);

    
    printf("Enter roll of the student:\n");
    scanf("%d",&student1.roll);

    printf("Enter marks of the student:\n");
    scanf("%d",&student1.marks);
    
    printf("Displaying Information:");
    
    
    printf("\nname of the student:%s",student1.name);
    

    printf("\nroll of the student:%d",student1.roll);
   

    printf("\n marks of the student:%d",student1.marks);

    return 0;
    
}