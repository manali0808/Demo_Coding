#include<stdio.h>
int main()
{
float celsius, fahrenheit;
printf("enter the Celsius temperature:");
scanf("%f",&celsius);
fahrenheit=(celsius*9/5)+32;
printf("The temperature in Fahrenheit is: %f", fahrenheit);
return 0;
}