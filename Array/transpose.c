#include <stdio.h>
int main()
{
    int trans[10][10], c, r;
    printf("Enter the row of matrix:");
    scanf("%d", &r);
    printf("Enter the coloum of matrix:");
    scanf("%d", &c);
    printf("Enter the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &trans[i][j]);
        }
        printf("\n");
    }
    printf(" the matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    printf(" the  Transpose of the matrix is:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t", trans[j][i]);
        }
        printf("\n");
    }
}
