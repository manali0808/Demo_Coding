#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    printf("Before Swapping:%d%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping:%d%d\n",a,b);
    return 0;
}