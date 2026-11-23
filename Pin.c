#include<stdio.h>
int main()
{
    int pin,attempts=0;
    while(attempts<3)
    {
    printf("Enter your PIN:");
    scanf("%d",&pin);
    if(pin==1234)
    {
        printf("Correct PIN,Access Granted\n.");
        break;
    }
    else
    {
         printf("Incorrect PIN\n");
        attempts++;
    }
}
printf("Max attempt reached. Access denied");
 return 0;
}