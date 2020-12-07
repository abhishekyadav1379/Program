#include <stdio.h>
int arr[] = {2, 9, 4, 6, 7, 8, 1, 4};
int size = sizeof(arr) / sizeof(arr[0]);
int k = 0;

void Print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void swap(int a, int b)
{
    int x = arr[a];
    arr[a] = arr[b];
    arr[b] = x;
}

void bubble()
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            swap(i, i + 1);
        }
    }
    if (k != size)
    {
        k++;
        printf("%d",k);
        bubble();
        
    }
    else
    {
        Print(arr, size);
    }
}

void main()
{
    Print(arr, size);
    bubble();
}