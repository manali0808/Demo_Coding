#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Enter the Length & Breadth:");
    scanf("%d%d",&l,&b);
    //Perimeter of Rectangle.
    perimeter=(2*(l+b));
    printf("The Perimeter of Rectangle is:%d",perimeter);
    //Area of Rectengle.
    area=(l*b);
    printf("The Area of Rectangle is:%d",area);
    return 0;
}