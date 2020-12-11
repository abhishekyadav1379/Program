#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    int size;
    char val;
    int i, j;
    printf("Enter size of matrix : ");
    scanf("%d", &size);
    int arr[size][size];
    for (i = 0; i < size; i++)
        for (j = 0; j < size; j++)
        {
            printf("Vertices %d & %d are adjacent ? (Y/N) : ", i, j);
            fflush(stdin);
            scanf("%c", &val);
            if (val == 'y' || val == 'Y')
            {
                arr[i][j] = 1;
            }
            else if (val == 'n' || val == 'N')
            {
                arr[i][j] = 0;
            }
            else
            {
                printf("Enter correct value.");
            }
        }
    printf("\nMatrix :\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}