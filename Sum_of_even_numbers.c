#include<stdio.h>
int main()
{
    int i=0,j=0,n,sum1=0,sum2=0;
    printf("Enter the Number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",sum1);
        sum1=sum1+i;
        i++;
    }
    while(j<=n)
    {
        printf("%d\n",sum2);
         sum2=sum2+j;
        j=j+2;
    }
    return 0;
}