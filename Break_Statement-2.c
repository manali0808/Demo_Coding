#include<stdio.h>
int main()
{
    int num,attempts=0;
    while(attempts<100)
    {
        printf("Enter the Number:");
        scanf("%d",&num);
        if(num%2!=0)
        {
            printf("Oops..!The number is odd.");
            break;
        }
        else
        {
            attempts++;
        }
    }
    return 0;
}