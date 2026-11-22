#include<stdio.h>
int main()
{
    int n,i,fact;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int fact,i=1;i<=n;i++)
    {
        fact=n*i;
    }
    printf("%d",fact);
    return 0;
}