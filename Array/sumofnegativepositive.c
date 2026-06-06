#include <stdio.h>
int main()
{
    int a[3][3], s1 = 0, s2 = 0; 
    printf("Enter the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
     printf(" the matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] >= 0)
            {
               s1=s1+a[i][j];
            }
            else
            {
                s2=s2+a[i][j];
            }
        }
    }
     printf("sum 0f (+ve) element:%d\n sum 0f (-ve) element:%d",s1,s2);
}