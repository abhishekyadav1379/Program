#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<string.h>
// BINARY SEARCH 

void search(int arr[], int data, int m, int n)
{
	if (arr[m] == data)
	{
		printf("data found at %d", m);
		return;
	}
	else if (data < arr[m])
	{
		return search(arr, data, m / 2, m);
	}
	else if (data > arr[m])
	{
		return search(arr, data, m + (n - m) / 2, n);
	}
	printf("data not found");
}
void main()
{
	int arr[] = {2, 4, 6, 8, 11, 13, 15, 17, 20, 22, 25};
	int m, n;
	n = sizeof(arr) / sizeof(arr[0]);
	m = n / 2;
	search(arr, 114, m, n);
}