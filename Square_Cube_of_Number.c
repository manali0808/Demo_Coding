#include<stdio.h>
int main()
{
    int a,square,cube;
    printf("Enter a Number:\n");
    scanf("%d",&a);
    square=a*a;
    printf("The Square of a Number is:%d\n",square);
    cube=a*a*a;
    printf("The Cube of a Number is:%d\n",cube);
    return 0;
}