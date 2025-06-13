#include<stdio.h>
int main()
{
    float r,area;
    printf("enter the radius :");
    scanf("%f",&r);

    area=3.14*(r*r);

    printf("The area of circle : %2f",area);
    return 0;
}