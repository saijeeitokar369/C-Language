#include<stdio.h>
int main(){
    int a[10][10],i,j,s1=0,s2=0,c1,r1;
    printf("Enter the row of matrix:");
    scanf("%d",&r1);
    printf("Enter the coloum of matrix:");
    scanf("%d",&c1);
       if (r1==c1)
    {
       printf("Enter the matrix:\n");
    for ( i = 0; i <r1 ; i++)
    {
       for ( j = 0; j < c1; j++)
       {
          scanf("%d",&a[i][j]);
       }
       printf("\n");
    }
    printf("\nmatrix:\n");
    for ( i = 0; i <r1 ; i++)
    {
       for ( j = 0; j < c1; j++)
       {
          printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    printf("sum of major and minor:\n");
    for ( i = 0; i <r1 ; i++)
    {
       for ( j = 0; j < c1; j++)
       {
          if (i==j)
          {
           s1=s1+a[i][j];
          }
         else if (i+j==r1-1)
           {
            s2=s2+a[i][j];
           }
       }
    }
       printf("Sum of Major=%d\nSum of Minor=%d",s1,s2);  
    }
    else
    printf("diagonal in only in square matrix"); 
}