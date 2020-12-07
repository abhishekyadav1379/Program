#include <stdio.h>
#include <conio.h>

void main()
{
    int num, sum;
    printf("Enter no. : ");
    scanf("%d", &num);
    sum = sum_digit(num);
    printf("sum : %d", sum);
}

int sum_digit(int num)
{
    int rem;
    rem = num % 10;
    num = num / 10;
    if (num == 0)
    {
        return rem;
    }
    return rem + sum_digit(num);
}