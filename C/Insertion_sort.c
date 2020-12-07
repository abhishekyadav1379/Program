#include <stdio.h>

int arr[] = {5, 2, 32, 8, 55,3, 23, 2, 4, 38};
//   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

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
    int x, a = 0, k = 0;
    Print(arr, size);
    for (int i = 0; i < size - 1; i++)
    {
        x = arr[i];
        for (int j = i + 1; j > 0; j--)
        {
            a++;
            if (arr[j] < arr[j - 1])
            {
                k++;
                swap(j, j - 1);
            }
            if (k == 0)
                break;
        }
    }
    Print(arr, size);
    printf("\n%d", a);
}