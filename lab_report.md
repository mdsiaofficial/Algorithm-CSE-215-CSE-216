2. Quick Sort
Definition
Quick Sort is a divide-and-conquer algorithm that selects a 'pivot' element from the array, partitions the other elements into two sub-arrays according to whether they are less than or greater than the pivot, and recursively sorts the sub-arrays.

History
Quick Sort was developed by Tony Hoare in 1959.

Time Complexity
Best Case: O(n log n)
Average Case: O(n log n)
Worst Case: O(n^2) (when the smallest or largest element is always chosen as the pivot)
Sorting Problem
Quick Sort is efficient for large datasets and is an in-place sort (requires only a small, constant amount of additional storage space). However, its performance can degrade if the pivot selections are poor.

Simulation
Choose a pivot element from the array.
Partition the array into elements less than and greater than the pivot.
Recursively apply the above steps to the sub-arrays.
C++ Code

#include <iostream>
#include <vector>

int partition(std::vector<int>& array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (array[j] <= pivot) {
            ++i;
            std::swap(array[i], array[j]);
        }
    }
    std::swap(array[i + 1], array[high]);
    return i + 1;
}

void quickSort(std::vector<int>& array, int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main() {
    std::vector<int> array = {10, 7, 8, 9, 1, 5};
    quickSort(array, 0, array.size() - 1);

    for (int val : array)
        std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}