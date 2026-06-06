#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c1,r1;
    int sum[10][10];
    printf("Enter the row of matrix:");
    scanf("%d",&r1);
    printf("Enter the coloum of matrix:");
    scanf("%d",&c1);
    printf("a[%d][%d]\nb[%d][%d]\n",r1,c1,r1,c1);
    printf("Enter elemant of  first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("first matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elemant of second matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&b[i][j]);
        }
       printf("\n"); 
    }
    printf("second matrix:\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d\t",b[i][j]);
        }
       printf("\n"); 
    }
    printf("\nsum of first and second matrix:\n");
    for ( int i = 0; i <r1 ; i++)
    {
        for (int j = 0; j < c1; j++)
        {
           sum[i][j]= sum[i][j]+a[i][j]+b[i][j];
           printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}