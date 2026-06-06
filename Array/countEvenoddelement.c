#include <stdio.h>
int main()
{
    int a[3][3], c1 = 0, c2 = 0; 
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
            if (a[i][j] % 2 == 0)
            {
                c1++;
            }
            else
                c2++;
        }
    }
     printf("Count of even element:%d\nCount of odd element:%d",c1,c2);
}