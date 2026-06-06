#include<stdio.h>
int main(){
    int a[10][10],sum=0,c,r;
    printf("Enter the row of matrix:");
    scanf("%d",&r);
    printf("Enter the coloum of matrix:");
    scanf("%d",&c);   
    printf("a[%d][%d]\n",r,c);
    printf("Enter elemant in matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\nmatrix is...\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           sum=sum+a[i][j]; 
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nsum=%d",sum);
}