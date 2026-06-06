//Find the largest number among the three numbers.


#include <stdio.h>
int main()
{
     int c , b , a,d ;
     printf("enter a ,b ,c and d");
     scanf("%d%d%d%d",&a,&b,&c,&d);
     if ((a>=b)&&(a>=c)&&(a>=d))
     {
        printf("A is largest number:%d",a);
     }
     else if ((b>=c)&&(b>=d))
     {
       printf("B is largest number:%d",b);
     }
     else if (c>=d)
     {
       printf("C is largest number:%d",c);
     }
     else
     {
       printf("D is largest number:%d",d);
     }
    return 0; 
       
}