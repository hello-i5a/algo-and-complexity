// Perform insertion sort on the array [45, 30, 170, 97, 21]
#include <stdio.h>

void display(int a[], int size);
void insertionSort(int a[], int size);

int main()
{
    int arr[] = {45, 30, 170, 97, 210};
    int n = sizeof(arr) / sizeof(arr[0]); // size

    printf("Unsorted:\n");
    display(arr, n);

    printf("After insertion sort:\n");
    insertionSort(arr, n);
    display(arr, n);

    return 0;
}

void display(int a[], int size)
{
    int n;

    for (n = 0; n < size; n++)
    {
        printf("%d ", a[n]);
    }
    printf("\n");
}

void insertionSort(int a[], int size)
{
    int i, j, temp, shift;

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j >= 0; j--)
        {
            temp = a[j];
            if (temp < a[j])
            {
                shift = j;
            }
            a[shift] = a[shift - 1];
        }
        a[j] = temp;
    }
}