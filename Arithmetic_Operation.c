#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the Values of a&b:");
    scanf("%d%d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%d\n",a,b,a/b);
    printf("a%b=%d\n",a%b);
    return 0;
}