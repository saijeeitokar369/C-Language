//WAP to print day in a month for first 6 month,also check leap year in respect of month,if some user insert the month of December in that case program must run for infinity time,also check diwali vacation in the month of October and print all holidays after this output format must be horizontal wise??..
#include<stdio.h>
int main()
{
   int month_number,year;
   printf("Enter the year:");
   scanf("%d",&year);
   printf("Enter the month_number(1-12):");
   scanf("%d",&month_number);   
    if (month_number==1||month_number==3||month_number==5)
     {
          printf("number of days in months is 31");
     }
   else if (month_number==4||month_number==6)
     {
          printf("number of days in months is 30");
     }
   else if (month_number==2)
     {
           if (year%4==0)
          {
               printf("number of days in months is 29");
          }
          else
          {
               printf("number of days in months is 28");
          }

     }
   else if (month_number==10)
     {    
              printf("****Diwali vacation****");
              printf(" diwali vacation in the month of october(17-25):17,18,19,20,21,22,2,24,25");
     }
   else if (month_number==12)
     {
              for (; ; )
         {
              printf("the month of December in that case program must run for infinity time");
         } 
     
     }
     

   
   

      
   
}
 
    
   
   
