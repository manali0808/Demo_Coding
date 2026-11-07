#include<stdio.h>
int main()
{
    int p,r,t,SI;
    printf("Enter the Principle Value, Rate of Interrest and Time:\n");
    scanf("%d%d%d",&p,&r,&t);
    SI=(p*r*t)/100;
    printf("The Simple Interest is: %d",SI);
    return 0;
}