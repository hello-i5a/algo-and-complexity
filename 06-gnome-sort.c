#include <stdio.h>

void display(int arr[], int size);
void gnomeSort(int arr[], int size);

int main()
{
    int elem[] = {5, 3, 4, 1, 6, 2};
    int n = sizeof(elem) / sizeof(elem[0]);

    printf("Original array:\n");
    display(elem, n);

    printf("After performing Gnome Sort:\n");
    gnomeSort(elem, n);
    display(elem, n);

    return 0;
}

void display(int arr[], int size)
{
    int i = 0;

    while (i < size)
    {
        printf("%d ", arr[i++]);
    }
    printf("\n");
}

void gnomeSort(int arr[], int size)
{
    int i = 1, temp;

    while (i < size)
    {
        // If the current element is less than the previous element, swap them
        if (arr[i] < arr[i - 1])
        {
            // Swap
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;

            // Step backward if a swap was made, but until the start of array only
            if (i > 1)
            {
                i -= 1;
            }
        }
        else
        {
            // If no swap was made, step forward
            i += 1;
        }
    }
}