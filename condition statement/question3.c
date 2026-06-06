//Write a C program to make a simple calculator(only two number) using switch (add, sub, mul, div).
#include<stdio.h>
int main(){
    float a,b;
    // int operators;
    char operators;
    printf("Enter a and b and operators:");
    scanf("%f%f%s",&a,&b,&operators);
    switch (operators)
    {
    case '+':
        printf("add: %f",a+b);
        break;
    case '-':
        printf("sub: %f",a-b);
        break;
    case '*':
        printf("mul: %f",a*b);
        break;
    case '/':
    if (b!=0)
    {
        printf("div: %f",a/b);
    } 
    else
    {
        printf("re-enter the value of b");
    }
        break;    
    default: 
        printf("worng input");
        
    }
    return 0;
}