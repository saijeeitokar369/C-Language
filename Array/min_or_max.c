#include<stdio.h>
int main(){
    int a[5],min,max,i;
    
    printf("enter the element of array\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
     min= a[0];
     max= a[0];
    for (i = 0; i < 5; i++)
    {
        if (a[i]<=min)
    {
        min=a[i];
    }
     else if(a[i]>=max)
    {
        max=a[i];
    }
    }
    printf(" this index is=%d\n",min);
    printf(" this index is=%d",max);
}