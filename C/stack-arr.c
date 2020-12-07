#include <stdio.h>
#include <conio.h>

int stack[20], top = -1;

void PUSH(int x)
{
    if (top == 20)
    {
        printf("stack full");
        return;
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void POP()
{
    top--;
}

void Print()
{
    for (int i = top; i >= 0; i--)
    {
        printf("%d \t", stack[i]);
    }
}
void main()
{
    PUSH(5);
    PUSH(6);
    PUSH(10);
    // POP();
    Print();
}