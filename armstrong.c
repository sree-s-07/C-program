#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp = 0, cnt = 0, rem;
    float result = 0;

    printf("Enter a Number :");
    scanf("%d", &n);

    temp = n;

    while (n > 0)
    {
        cnt++;
        n = n / 10;
    }

    n = temp;

    while (n > 0)
    {
        rem = n % 10;
        result = result + pow(rem, cnt);
        n = n / 10;
    }

    if (result == temp)
        printf("A armstrong number..");
    else
        printf("Not Armstrong number..");
}