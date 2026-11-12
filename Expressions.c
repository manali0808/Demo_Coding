#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Values of a and b:");
    scanf("%d%d",&a,&b);
    c=(a+b)*(a-b);
    printf("The Value of Expression is:%d",c);
    return 0;
}