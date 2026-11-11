#include<stdio.h>
int main()
{
    float r,circumference,area;
    printf("Enter the Radius:");
    scanf("%f",&r);
    //Circumference of Circle.
    circumference=2*3.14*r;
    printf("The Circumference of Circle is:%2f\n",circumference);
    //Area of Circle.
    area=3.14*r*r;
    printf("The Area of Circle is:%2f\n",area);
    return 0;
}