#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    c=a*a+2*a*b+b*b;
    printf("The Value of Expression is:%d\n",c);
    return 0;
}