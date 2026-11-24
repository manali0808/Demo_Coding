#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        if(a<=b+c)
    {
        printf("This can be a triangle.\n");
        if(a==b || b==c || c==a)
        {
            if(a==b==c)
            {
                printf("This is Equilateral Triangle.\n");
            }
            else
            {
                printf("This is Isosceles Triangle.\n");
            }
        }
        else
        {
            printf("This is scalene Triangle.\n");
        }
    }
        else
    {
        printf("This can't be a Triangle.\n");
    }
    }
    if(b>=a && b>=c)
    {
        if(b<=a+c)
        {
        printf("This can be a triangle.\n");
        if(a==b || b==c || c==a)
        {
            if(a==b==c)
            {
                printf("This is Equilateral Triangle.\n");
            }
            else
            {
                printf("This is Isosceles Triangle.\n");
            }
        }
        else
        {
            printf("This is scalene Triangle.\n");
        }
    }
    else
    {
        printf("This can't be a Triangle.\n");
    }
    }
    if(c>=a && c>=b)
    {
        if(c<=a+b)
        {
        printf("This can be a triangle.\n");
        if(a==b || b==c || c==a)
        {
            if(a==b==c)
            {
                printf("This is Equilateral Triangle.\n");
            }
            else
            {
                printf("This is Isosceles Triangle.\n");
            }
        }
        else
        {
            printf("This is scalene Triangle.\n");
        }
    }
    else
    {
        printf("This can't be a Triangle.\n");
    }
    }
    return 0;
}