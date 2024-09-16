// Perform bubble sort on the array [11, 21, 7, 35, 6]
#include <stdio.h>
#define N 5 // Size

void display(int a[]);
void bubbleSort(int a[]);

int main()
{
    int arr[N] = {11, 21, 7, 35, 6};

    printf("Unsorted:\n");
    display(arr);

    printf("\nSorted:\n");
    bubbleSort(arr);
    display(arr);

    return 0;
}

void display(int a[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[])
{
    int i, j, temp;

    for (i = N - 1; i >= 0; i--)
    {
        for (j = 0; j < N; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}