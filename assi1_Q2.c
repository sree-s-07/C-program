#include<stdio.h>
int main()
{
   float radius, height, volume, surfaceArea;

   printf("Enter the cylender radius :");
   scanf("%f",&radius);

   printf("Enter the cylender height :");
   scanf("%f",&height);

   surfaceArea = 2*3.14*radius*radius+2*3.14*radius*height;
   volume = 3.14 *radius*radius*height;

   printf("\n surfaceArea of cylender is :%f",surfaceArea);
   printf("\n Volume of the cylender is :%f",volume);
   return 0;
}