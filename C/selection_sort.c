#include <stdio.h>

int arr[] = {5, 2, 32, 8, 3, 1, 3, 23, 2, 4, 38};

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

void main()
{
    int size = sizeof(arr) / sizeof(arr[0]);
    Print(arr, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(i, j);
            }
        }
    }
    Print(arr, size);
}