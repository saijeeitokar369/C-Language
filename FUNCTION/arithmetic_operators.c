#include<stdio.h>
// function declartion
int add();
int sub();
int mul();
int div1();
// function difination
int add(){
    int a,b;
    printf("Enter value of A:");
    scanf("%d",&a);
    printf("Enter value of B:");
    scanf("%d",&b);
    printf("Sum of A+B=%d\n",a+b);
}
int sub(){
    int a,b;
    printf("Enter value of A:");
    scanf("%d",&a);
    printf("Enter value of B:");
    scanf("%d",&b);
    printf("Subtraction of A-B=%d\n",a-b);
}
int mul(){
    int a,b;
    printf("Enter value of A:");
    scanf("%d",&a);
    printf("Enter value of B:");
    scanf("%d",&b);
    printf("Multiplication of A*B=%d\n",a*b);
}
int div1(){
    int a,b;
    printf("Enter value of A:");
    scanf("%d",&a);
    printf("Enter value of B:");
    scanf("%d",&b);
    if (b==0)
       printf("not posible");
    else
    printf("Division of A/B=%d",a/b);
}
//calling of function
int main()
{
    add();
    sub();
    mul();
    div1();
}


