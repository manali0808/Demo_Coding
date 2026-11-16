#include<stdio.h>
int main()
{
    int l,perimeter,area;
    printf("Enter the Length of square:");
    scanf("%d,&l");
    //Perimeter of Square.
    perimeter=(4*l);
    printf("The Perimeter of a Square is:%d\n",perimeter);
    //Area of Square.
    area=(l*l);
    printf("The Area of a Square is:%d",area);
    return 0;
}