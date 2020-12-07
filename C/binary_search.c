#include <stdio.h>

int binary(int arr[], int n, int item)
{
    int beg = 0, end = n - 1;
    int mid = (end + beg) / 2;
    while ((beg <= end) && (arr[mid] != item))
    {
        if (item < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }
    return mid;
}

void main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 15;
    int c = binary(arr, n, item);
    printf("%d", c);
}