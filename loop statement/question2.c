// Write a program to print the sum of even number and odd number using a for loop.
#include<stdio.h>
int main(){
    int i,num,evensum=0,oddsum=0;
     printf("Enter natural number:");
     scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {  if(i%2==0){
       evensum=evensum+i;
           printf("%d\n",i);
        }
    }
    printf("sum of even number:%d\n",evensum);
    
    for ( i = 1; i <= num; i++)
    {  if(i%2!=0){
       oddsum=oddsum+i;
           printf("%d\n",i);
        }
    }
    printf("sum of odd number:%d\n",oddsum);
   
}