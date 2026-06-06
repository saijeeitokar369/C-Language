// Write a program to print even numbers between 1 and 50 using a for loop.

#include<stdio.h>
int main(){
    int i=1,num;
    printf("Enter number:");
    scanf("%d",&num);
    for ( ; i <= num;)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
      
    
    
    
}