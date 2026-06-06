#include<stdio.h>

struct student{ 
    int age;
    char name;
    long mob_num;
    char program;
};           
           
int main()
{   
    struct student s1,s2;
    
    s1.name = 'a';
    s1.age = 2;
    s1.mob_num=123;
    s1.program ='n';
    
    printf("Name:%c\n",s1.name);
    printf("Age:%c\n",s1.age);
    printf("mob_num:%c\n",s1.mob_num);
    printf("Program:%c\n",s1.program);
    
printf("2nd record")

    s1.name = 'a';
    s1.age = 2;
    s1.mob_num=123;
    s1.program ='n';
    
    printf("Name:%c\n",s1.name);
    printf("Age:%c\n",s1.age);
    printf("mob_num:%c\n",s1.mob_num);
    printf("Program:%c\n",s1.program);
    
    return 0;
}