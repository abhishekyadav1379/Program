#include <stdio.h>

void Print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void main()
{
    int arr[] = {5, 2, 21, 8, 3, 1, 3, 2, 4, 36};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;
    Print(arr, size);
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                x = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = x;
            }
        }
    }
    Print(arr, size);
}