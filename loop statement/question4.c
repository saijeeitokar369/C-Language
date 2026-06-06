// Write a program to print a multiplication table of any number using a for loop.
#include<stdio.h>
int main(){
    int i ,num,multiplication=0 ,sum=0;
    printf("Enter table of:");
    scanf("%d",&num);
    for ( i = 1; i <= 10; i++)
    {
       multiplication=num*i;
      printf("%d*%d=%d\n",num,i,multiplication);
      sum=sum+multiplication;
    }
     printf("sum:%d",sum);
    
}