#include<stdio.h> // include stdio.h library

#include<stdlib.h> // include stdlib.h library

int valid_date(int date, int mon, int year);

int main(void)

{

   int day1, mon1, year1,

       day2, mon2, year2;

   int day_diff, mon_diff, year_diff;        

   printf("Enter start date (MM/DD/YYYY): ");

   scanf("%d/%d/%d", &mon1, &day1, &year1);

   printf("Enter end date (MM/DD/YYYY): ");

   scanf("%d/%d/%d", &mon2, &day2, &year2);

   if(!valid_date(day1, mon1, year1))

   {

       printf("First date is invalid.\n");        

   }

   if(!valid_date(day2, mon2, year2))

   {

       printf("Second date is invalid.\n");

       exit(0);

   }      

   if(day2 < day1)

   {      

       // borrow days from february

       if (mon2 == 3)

       {

           //  check whether year is a leap year

           if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))

           {

               day2 += 29;

           }

           else

           {

               day2 += 28;

           }                        

       }

       // borrow days from April or June or September or November

       else if (mon2 == 5 || mon2 == 7 || mon2 == 10 || mon2 == 12)

       {

          day2 += 30;

       }

       // borrow days from Jan or Mar or May or July or Aug or Oct or Dec

       else

       {

          day2 += 31;

       }

       mon2 = mon2 - 1;

   }

   if (mon2 < mon1)

   {

       mon2 += 12;

       year2 -= 1;

   }      

   day_diff = day2 - day1;

   mon_diff = mon2 - mon1;

   year_diff = year2 - year1;

   printf("Difference: %d years %02d months and %02d days.", year_diff, mon_diff, day_diff);

   return 0; // return 0 to operating system

}

// function to check whether a date is valid or not

int valid_date(int day, int mon, int year)    

{

   int is_valid = 1, is_leap = 0;

   if (year >= 1800 && year <= 9999)

   {

       //  check whether year is a leap year

       if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))

       {

           is_leap = 1;

       }

       // check whether mon is between 1 and 12

       if(mon >= 1 && mon <= 12)

       {

           // check for days in feb

           if (mon == 2)

           {

               if (is_leap && day == 29)

               {

                   is_valid = 1;

               }

               else if(day > 28)

               {

                   is_valid = 0;

               }

           }

           // check for days in April, June, September and November

           else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)

           {

               if (day > 30)

               {

                   is_valid = 0;

               }

           }

// check for days in rest of the months

           // i.e Jan, Mar, May, July, Aug, Oct, Dec

           else if(day > 31)

           {            

               is_valid = 0;

           }        

       }

       else

       {

           is_valid = 0;

       }

   }

   else

   {

       is_valid = 0;

   }

   return is_valid;

}