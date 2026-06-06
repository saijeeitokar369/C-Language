#include<stdio.h>
//funtion declartion
int swap();
//funtion difination
int swap(){
    int a,b;
    printf("Enter the number A:");
    scanf("%d",&a);
    printf("Enter the number B:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A=%d\nB=%d",a,b);
}
//calling of funtion
int main(){
    swap();
}
