#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greatest.",a);
        }
        else
        {
            printf("%d is geatest.",c);
        }
    }
    else if(c>b)
    {
        printf("%d is greatest.",c);
    }
    else
    {
        printf("%d is the greatest.",b);
    }
    return 0;
}