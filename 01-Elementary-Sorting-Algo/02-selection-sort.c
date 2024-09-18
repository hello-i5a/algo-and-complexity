// Perform selection sort on the array [21, 9, 14, 5, 2]
#include <stdio.h>
#define N 5 // Size

void display(int a[]);
void selectionSort(int a[]);

int main()
{
    int arr[N] = {21, 9, 14, 5, 2};

    printf("Unsorted:\n");
    display(arr);

    printf("After performing selection sort:\n");
    selectionSort(arr);
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

void selectionSort(int a[])
{
    int i, j, min, temp;

    for (i = 0; i < N - 1; i++)
    {
        min = i;
        for (j = i + 1; j < N; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        if (i != min)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

/*
Code improvement:
Encapsulate the swapping
    if (i != min)
    {
        swap(&a[i], &a[min]);
    }

    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
*/