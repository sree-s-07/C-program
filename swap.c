#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter two numbers :");
    scanf("%d%d",&a,&b);

    printf("\n Befor swaping A=%d B=%d",a,b);

    a=a+b-(b=a);

    printf("\n After swaping A=%d b=%d",a,b);
    return 0;

}