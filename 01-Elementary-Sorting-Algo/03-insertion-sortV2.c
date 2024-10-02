#include <stdio.h>

void display(int arr[], int n);
void insertionSort(int arr[], int);

int main()
{
    int elem[] = {45, 30, 21, 60, 27};
    int size = sizeof(elem) / sizeof(elem[0]);

    printf("Unsorted array:\n");
    display(elem, size);

    insertionSort(elem, size);

    printf("\nAfter performing Insertion Sort:\n");
    display(elem, size);

    return 0;
}

void display(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n)
{
    int i, j, temp;

    for (i = 1; i < n; i++)
    { // Unsorted list, number of passes
        temp = arr[i];
        j = i - 1; // Inner comparison

        while ((j >= 0) && (arr[j] > temp))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}