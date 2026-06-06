#include<stdio.h>
int main(){
    int a[100],n;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("print only -ve element:\n");
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            printf("a[%d]=%d\n",i,a[i]);
        }
        
    }
}
    