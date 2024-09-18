/*
Elementary Sorting Algorithms
1. Bubble sort
2. Selection sort
3. Insertion sort

Sorting -> Process of rearranging elements in a collection
Collection of elements -> Array implementation
Before you sort, you swap -> temporary variable

Bubble sort:
The largest value bubbles (or goes) up to the top (or tail).
    Pseudocode
        * First loop (outer): i -> from N-1 to 0
            To get the last element, second to the last element, so on and so forth
            The goal is to sort the biggest element first
        * Second loop (inner): j -> from 0 to i-1
            Compare the current element to its adjacent element
        * arr[j] > arr[j + 1] -> swap the two values
If there are N numbers of elements, the total number of passes required to sort it is (N-1).
    Analysis
        * Time complexity: First pass requires (N-1) comparisons, second pass requires (N-2) and so on.
                            O(N^2)
        * Space complexity: In-place sorting algorithm.
                            O(1)

Selection sort:
Smallest element is searched in the array and once found, it is placed in its correct sorted position.
    Pseudocode
        * First loop (outer): i -> from 0 to N-1
            You assume that the smallest element is at the first index, so on and so forth
            Hence, you assume last element is the biggest
        * Second loop (inner): j -> from i+1 to N
            Compare the "assumed" smallest with the adjacent elements until the end of the array
            A.k.a. searching
        * "Assumed" smallest element: min = i
        * Find the smallest element by comparison: a[min] > a[j]
        * If the index of the "assumed" smallest are not the same after comparison, swap: i != min
*/