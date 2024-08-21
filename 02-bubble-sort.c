#include <stdio.h>
#define MAX 7

void display(int arr[]);
void bubbleSort(int arr[]);

int main()
{
    int a[MAX] = {4, 7, 1, 6, 9, 2, 3};

    printf("Original array:\n");
    display(a);

    bubbleSort(a);

    printf("Sorted array:\n");
    display(a);

    return 0;
}

void display(int arr[])
{
    int n;

    for (n = 0; n < MAX; n++)
    {
        printf("%d ", arr[n]);
    }
    printf("\n");
}

void bubbleSort(int arr[])
{
    int i, j, temp;

    for (i = MAX; i >= 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}