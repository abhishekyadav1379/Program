#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter no. : ");
    scanf("%d", &num);
    printf("Factorial is : %d", fact(num));
}

int fact(int num)
{
    int fac = 1;
    if (num == 1)
    {
        return fac;
    }
    return num * fact(num - 1);
}