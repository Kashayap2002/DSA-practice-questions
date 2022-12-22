#include <stdio.h>
#include<conio.h>
struct marks
{
int subl, sub2, sub3;
int total;
};
main()
{
int i; //Declaring and initializing array of structures of type 'marks' . . . .
struct marks student[3] = {45,67,81,0}, {75,53,69,0}, { 57,36,71,0};
struct marks totals; // One more structure variable 'totals' to store totals
for (i = 0; i <= 2; i++)
{
//Computing totals for each student
student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;

// Computing subject-wise totals and storing in 'totals'

totals.sub1 = totals.sub1 + student[i].sub1;
totals.sub2 = totals.sub2 + student[i].sub2;
totals.sub3 = totals.sub3 + student[i].sub3;
totals.total = totals.total + student[i].total;
}

//Printing totals for each student
printf("\nstudent total\n\n");
for(i = 0; i <= 2, i++)
printf ("student[%d] %fin",i+1,student[i].total);
//Printing totals for each subject
printf('\n Subject total\n\n");
printf("%s\t %d\n %s\t %d\n %s\t %d\n", "subject1", totals.sub1, "subject2", totals.sub2, "subject3", totals.sub3);
printf("\n Grand total = %d\n", totals.total);
}
