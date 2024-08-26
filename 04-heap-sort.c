// Index 0 holds the last index of the array
// The elements of the array are stored beginning index 1
// Functions: (1) buildHeap, (2) maxHeapify
#include <stdio.h>

void display(int arr[]);
void buildHeap(int arr[]);
void maxHeapify(int arr[], int index);

int main()
{
    int a[] = {-1, 9, 7, 2, 5, 0, 10, 4};
    int size = (sizeof(a) / sizeof(a[0])) - 1;
    a[0] = size;
    printf("Size: %d\n", a[0]);

    printf("\nBefore:\n");
    display(a);

    buildHeap(a);

    printf("\nAfter:\n");
    display(a);

    return 0;
}

void maxHeapify(int arr[], int index)
{
    int largest = index;
    int lc = 2 * index;
    int rc = lc + 1;

    // Check if left child exists and is greater than the current largest
    if (lc <= arr[0] && arr[lc] > arr[largest])
    {
        largest = lc;
    }

    // Check if right child exists and is greater than the current largest
    if (rc <= arr[0] && arr[rc] > arr[largest])
    {
        largest = rc;
    }

    // If the largest is not the current index, swap and heapify the affected subtree
    if (largest != index)
    {
        int temp = arr[index];
        arr[index] = arr[largest];
        arr[largest] = temp;

        maxHeapify(arr, largest);
    }
}

void buildHeap(int arr[])
{
    // Index of last non-leaf node: n/2
    // Each subtree should satisfy the maxHeapify (bottom-up approach)

    int n;
    for (n = arr[0] / 2; n >= 1; n--)
    {
        printf("Index of last non-leaf node: %d\n", n);
        maxHeapify(arr, n);
    }
}

void display(int arr[])
{
    int n;

    for (n = 1; n <= arr[0]; n++)
    {
        printf("%d ", arr[n]);
    }
    printf("\n");
}