#include <stdio.h>

void display(int arr[], int n);
int calculateGap(int n);
void combSort(int arr[], int n);
void swap(int *a, int *b);

int main()
{
    int elem[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int size = sizeof(elem) / sizeof(elem[0]);

    printf("Unsorted:\n");
    display(elem, size);

    combSort(elem, size);

    printf("\nAfter performing Comb Sort:\n");
    display(elem, size);

    return 0;
}

void display(int arr[], int n)
{
    int nDex;

    for (nDex = 0; nDex < n; nDex++)
    {
        printf("%d ", arr[nDex]);
    }
    printf("\n");
}

int calculateGap(int n)
{
    n = n / 1.3;

    if (n < 1)
    {
        n = 1;
    }
    printf("Current gap: %d\n", n);

    return n;
}

void combSort(int arr[], int n)
{
    int gap = n;
    int j;
    int swapped = 1; // Set to TRUE

    while (gap != 1 || swapped)
    { // while(gap != 1 || swapped != 0)
        gap = calculateGap(gap);
        swapped = 0; // Reset to FALSE, no swapping yet

        for (j = 0; j + gap < n; j++)
        {
            if (arr[j] > arr[j + gap])
            {
                swap(&arr[j], &arr[j + gap]);
                swapped = 1; // Swapping occured
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}