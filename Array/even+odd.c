#include<stdio.h>
int main(){
    int a[50];
    int b[50],n;
    int total=0,sumodd=0,sumeven=0,i;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the element of 1st array:\n");
    for (i = 0; i < n; i++)
    {  
        scanf("%d",&a[i]); 
    }
    printf("print even index from 1st array:\n");
    for (i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            printf("a[%d]=%d\n",i,a[i]);
            sumeven=sumeven+a[i];
        }
    }
    printf("sum even index from 1st array=%d\n",sumeven);
    printf("enter the element of 2nd array:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    printf("print odd index from 2nd array:\n");
    for (i = 0; i < n; i++)
    {
        if (i%2!=0)
        {
            printf("b[%d]=%d\n",i,b[i]);
            sumodd=sumodd+b[i];
        }
    }
    printf("sum of odd indexfrom 2nd array=%d\n",sumodd);
    printf("sum of index of 1st(even) and 2nd(odd) array:\n");
      total=total+sumeven+sumodd;
    printf(" sum of even(1st)=%d\nsum of odd(2nd)=%d\ntotal=%d\n",sumeven,sumodd,total);
}