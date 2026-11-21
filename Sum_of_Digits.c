#include<stdio.h>
int main()
{
    int num,sum=0, digit;
    printf("Enter the Number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        digit=(num%10);
        sum=(sum+digit);
        num=(num/10);
    }
    printf("%d",sum);
    return 0;
}