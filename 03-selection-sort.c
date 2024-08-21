#include <stdio.h>
#define MAX 5

void display(int arr[]);
void selectionSort(int arr[]);

int main()
{
    int a[MAX] = {5, 3, 4, 1, 2};

    display(a);

    selectionSort(a);

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

void selectionSort(int arr[])
{
    int i, j, smallestNdex, temp;

    // Iterate through the unsorted array
    for (i = 0; i < MAX - 1; i++)
    {
        smallestNdex = i;

        // Search through the unsorted portion of the array to find the smallest
        for (j = i + 1; j < MAX; j++)
        {
            if (arr[j] < arr[smallestNdex])
            {
                smallestNdex = j;
            }
        }

        if (i != smallestNdex)
        {
            temp = arr[i];
            arr[i] = arr[smallestNdex];
            arr[smallestNdex] = temp;
        }
    }
}