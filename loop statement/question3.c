// Write a program to print the sum of  natural numbers using a for loop.
#include<stdio.h>
int main(){
    int i,num,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        sum=sum+i;
    }
    printf("sun of natural number:%d",sum);
    
}