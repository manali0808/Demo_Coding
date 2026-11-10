#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Number:");
    scanf("%d",&a);
    //Checking whether the number is Even or Odd.
    if(a%2==0)
    printf("The NUmber is Even");
    else
    printf("The Number is Odd");
   return 0;
}