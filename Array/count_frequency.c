#include<stdio.h>
int main (){
    int a[100],i,c=0,n,n1;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter the element of array\n:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("count frequency of number:");
    scanf("%d",&n1);
    for ( i = 0; i < n; i++)
    {
       if (a[i]==n1)
        c++;
    }
    printf("count=%d",c);
}