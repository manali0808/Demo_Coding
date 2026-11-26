#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    if(n>0)
    {
    printf("The Number id Positive.\n");
    if(n%2==0)
    {
        printf("The Number is Even.\n");
    }
    else
    {
        printf("The Number id Odd.\n");
    }
    }
else if(n<0)
{
    printf("The Number is Negative.");
    if(n%2==0)
    {
        printf("The Number is Even.\n");
    }
    else
    {
        printf("The Number id Odd.\n");
    }
}
else
{
    printf("The Number is Zero.");
}
return 0;
}