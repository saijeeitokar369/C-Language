#include<stdio.h>
int main()
{
    int a[100],n,max=0,_2nd_max;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the element of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            _2nd_max=max;
            max=a[i];
        }
    }
    printf("Sconder largest number:%d",_2nd_max);
}