#include <stdio.h>
#define SIZE 5

void displayArr(int arr[]);
void selectionSort(int arr[]);

int main()
{
    int elems[SIZE] = {56, 99, 21, 47, 68};

    printf("Before:\n");
    displayArr(elems);

    selectionSort(elems);

    printf("\nAfter:\n");
    displayArr(elems);

    return 0;
}

void displayArr(int arr[])
{
    int n;

    for (n = 0; n < SIZE; n++)
    {
        printf("%d ", arr[n]);
    }
    printf("\n");
}

void selectionSort(int arr[])
{
    int n, m, min, loc, temp;

    // Outer loop: the first element until the second to the last element
    // Inner loop: searches through the unsorted portion of the array, to find the minimum element

    for (n = 0; n < SIZE - 1; n++) // n - 1 pass or iteration
    {
        loc = n; // Assume that the smallest element is in the first index
        for (m = n + 1; m < SIZE; m++)
        {
            if (arr[loc] > arr[m])
            {
                loc = m;
            }
        }
        if (loc != n)
        { // If the minimum is not the index you initially begin with, swap the two values
            temp = arr[n];
            arr[n] = arr[loc];
            arr[loc] = temp;
        }
    }
}