#include<stdio.h>
// function declartion
float circle();
float square();
float rectangle();
float cylinder();
// function difination
    float circle(){
        float r,area;
        printf("Enter radius of circle:");
        scanf("%f",&r);
        area=3.14*r*r;
        printf("%f\n",area);
    }
    float square(){
        float r,area;
        printf("Enter side of square:");
        scanf("%f",&r);
        area=r*r;
        printf("%f\n",area);
    }
    float rectangle(){
        float a,b,area;
        printf("Enter length of rectangle:");
        scanf("%f",&a);
        printf("Enter breadth of rectangle:");
        scanf("%f",&b);
        area=a*b;
        printf("%f\n",area);
    }
    float cylinder(){
        float r,h,area;
        printf("Enter Radius of Cylinder:");
        scanf("%f",&r);
        printf("Enter Height of Cylinder:");
        scanf("%f",&h);
        area=2*3.14*r*h+2*3.14*r*r;
        printf("%f\n",area);
    }
    //calling of function
    int main()
    {
        circle();
        rectangle();
        square();
        cylinder();
    }
