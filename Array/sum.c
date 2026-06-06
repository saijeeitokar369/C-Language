#include<stdio.h>
int main(){
    int a[50],n;
     int b[50];
     int sum[50]={0};
    printf("enter the size  array\n");
    scanf("%d",&n);
    printf("enter the element of 1st array:\n");
     for ( int i = 0; i < n; i++)
     {
         scanf("%d",&a[i]);
    }
    printf("enter the element of 2nd array:\n");
    for ( int i = 0; i < n; i++)
     {
         scanf("%d",&b[i]);
    }
    printf("sum of element of 1st  and 2nd array:\n");
     for ( int i = 0; i < n; i++)
     {
         sum[i]=sum[i]+a[i]+b[i];
         printf("a[%d]+b[%d]=%d\n",i,i,sum[i]);
    }
    
    }
    
    
