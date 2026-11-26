#include<stdio.h>
int main()
{
    int a,b,c,d,e,ans;
    printf("Enter the values of a,b,c,d and e:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    ans=(a*b/c+e-d);
    printf("The Answer is%d",ans);
    return 0;
}