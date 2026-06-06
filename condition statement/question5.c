//Write a program to check whether a number is multiple of both 3 and 7.
#include<stdio.h>
int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    if ((number%3==0)&&(number%7==0))
    {
        printf("A number is multiple of both 3 and 7");
    }
    else
    {
        printf("A number is not multiple of both 3 and 7");
    }
        return 0;
    
}