// Write a program to find the factorial of a number using a for loop.
#include<stdio.h>
int main(){
int i,num,fact=1;
printf("Enter number to find factorial:");
scanf("%d",&num);
for ( i = 1; i <= num; i++)
{
    fact=i*fact;
   
}
printf("the factorial:%d",fact);
}