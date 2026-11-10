#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number:");
    scanf("%d",&a);
    //Checking whether the number is divisible by two or not.
    if(a%2==0)
      printf("The NUmber is Divisible by 2");
    else
      printf("The Number is not Divisible by 2");
    return 0;
}