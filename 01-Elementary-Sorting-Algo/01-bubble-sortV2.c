#include <stdio.h>

void display(int arr[], int n);
void bubbleSort(int arr[], int n);
void swap(int *a, int *b);

int main()
{
    int elem[] = {11, 21, 7, 35, 6};
    int size = sizeof(elem) / sizeof(elem[0]);

    printf("Unsorted:\n");
    display(elem, size);

    bubbleSort(elem, size);
    printf("\nAfter performing Bubble Sort:\n");
    display(elem, size);

    return 0;
}

void display(int arr[], int n)
{
    int ndex;

    for (ndex = 0; ndex < n; ndex++)
    {
        printf("%d ", arr[ndex]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
    int i, j;

    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
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