#include<stdio.h>
int main(){
    int radius,circumference,area;

    printf("Enter the radius :");
    scanf("%d",&radius);

    area= 3.14*(radius*radius);
    circumference= 2*3.14*radius;

    printf("\n The area of circle is :%d",radius);
    printf("\n The circumference of circle is :%d",circumference);

    return 0;
}