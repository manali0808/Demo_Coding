#include<stdio.h>
int main()
{
    int a;
    printf("Enter your marks:");
    scanf("%d",&a);
    if(a>=90)
        printf("You got A Grade.");
    else if(a<=89 && a>=75)
        printf("You got B Grade.");
    else if(a<=60 && a>=74)
        printf("You got C Grade.");
    else if(a<=40 && a>=59)
        printf("You Got D Grade.");
    else
        printf("You are fail in exam.\nBetter Luck next time..!");
    return 0;
}