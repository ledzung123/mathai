#include <iostream>
#include <vector>

class SortingAlgorithms {
private:
    // Utility function for merge sort
    static void merge(std::vector<int>& arr, int left, int mid, int right) {
        // TODO: Implement merge function
        // 1. Create temporary arrays L[] and R[]
        // 2. Copy data to temporary arrays
        // 3. Merge the temporary arrays back into arr[left..right]
        int i, j, k;
        int first = mid - left + 1;
        int last = right - mid;
        std::vector<int> L(first);
        std::vector<int> R(last);

        for (i = 0; i < first; i++) {
            L[i] = arr[left + i];
        }

        for (j = 0; j < last; j++) {
            R[j] = arr[mid + j + 1];
        }

        i = 0;
        j = 0;
        k = left;

        while (i < first && j < last) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            }

            else {
                arr[k] = R[j];
                j++;
            }

            k++;
        }

        while (i < first) {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < last) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    // Utility function for quick sort
    static int partition(std::vector<int>& arr, int low, int high) {
        // TODO: Implement partition function
        // 1. Select pivot (typically last element)
        // 2. Place pivot at its correct position
        // 3. Place smaller elements to left of pivot and greater to right
        int pivot = arr[(low + high)/2];
        int i = low;
        int j = high;

        while (i < j) {
            while (arr[i] < pivot) {
                i++;
            }

            while (arr[j] > pivot) {
                j--;
            }

            if (i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
        return j; // Placeholder return
    }

    // Recursive function for merge sort
    static void mergeSortRecursive(std::vector<int>& arr, int left, int right) {
        // TODO: Implement recursive merge sort
        // 1. Check if left < right
        // 2. Find middle point
        // 3. Sort first and second halves
        // 4. Merge the sorted halves
        if (left < right) {
            int mid = (left + right)/2;
            mergeSortRecursive(arr, left, mid);
            mergeSortRecursive(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    // Recursive function for quick sort
    static void quickSortRecursive(std::vector<int>& arr, int low, int high) {
        // TODO: Implement recursive quick sort
        // 1. Check if low < high
        // 2. Get partition index
        // 3. Sort elements before and after partition
        if (low < high) {
            int pivot = partition(arr, low, high);
            quickSortRecursive(arr, low, pivot - 1);
            quickSortRecursive(arr, pivot + 1, high);
        }
    }

public:
    // Bubble Sort
    static void bubbleSort(std::vector<int>& arr) {
        // TODO: Implement bubble sort
        // 1. Use nested loops
        // 2. Compare adjacent elements
        // 3. Swap if they are in wrong order
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size() - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j]= arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    // Selection Sort
    static void selectionSort(std::vector<int>& arr) {
        // TODO: Implement selection sort
        // 1. Find minimum element in unsorted array
        // 2. Swap it with first element of unsorted part
        // 3. Move boundary of unsorted array
        for (int i = 0; i < arr.size(); i++) {
            int minVal = i;
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[minVal] > arr[j]) {
                    minVal = j;
                }
            }

            if (minVal != i) {
                int temp = arr[i];
                arr[i] = arr[minVal];
                arr[minVal] = temp;
            }
        }
    }

    // Insertion Sort
    static void insertionSort(std::vector<int>& arr) {
        // TODO: Implement insertion sort
        // 1. Iterate through array
        // 2. For each element, insert it into its correct position in sorted part
        for (int i = 0; i < arr.size(); i++) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;
        }
    }

    // Merge Sort (public interface)
    static void mergeSort(std::vector<int>& arr) {
        mergeSortRecursive(arr, 0, arr.size() - 1);
    }

    // Quick Sort (public interface)
    static void quickSort(std::vector<int>& arr) {
        quickSortRecursive(arr, 0, arr.size() - 1);
    }
};

// Utility function to print array
void printArray(const std::vector<int>& arr) {
    for (int i : arr) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

// Testing function - DO NOT MODIFY
void testSortingAlgorithms() {
    std::vector<std::vector<int>> testArrays = {
        {64, 34, 25, 12, 22, 11, 90},
        {38, 27, 43, 3, 9, 82, 10},
        {8, 4, 23, 42, 16, 15},
        {122, 45, 75, 90, 32, 11},
        {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
    };

    std::cout << "Testing Bubble Sort:\n";
    std::vector<int> arr1 = testArrays[0];
    std::cout << "Original array: ";
    printArray(arr1);
    SortingAlgorithms::bubbleSort(arr1);
    std::cout << "Sorted array: ";
    printArray(arr1);
    std::cout << std::endl;

    std::cout << "Testing Selection Sort:\n";
    std::vector<int> arr2 = testArrays[1];
    std::cout << "Original array: ";
    printArray(arr2);
    SortingAlgorithms::selectionSort(arr2);
    std::cout << "Sorted array: ";
    printArray(arr2);
    std::cout << std::endl;

    std::cout << "Testing Insertion Sort:\n";
    std::vector<int> arr3 = testArrays[2];
    std::cout << "Original array: ";
    printArray(arr3);
    SortingAlgorithms::insertionSort(arr3);
    std::cout << "Sorted array: ";
    printArray(arr3);
    std::cout << std::endl;

    std::cout << "Testing Merge Sort:\n";
    std::vector<int> arr4 = testArrays[3];
    std::cout << "Original array: ";
    printArray(arr4);
    SortingAlgorithms::mergeSort(arr4);
    std::cout << "Sorted array: ";
    printArray(arr4);
    std::cout << std::endl;

    std::cout << "Testing Quick Sort:\n";
    std::vector<int> arr5 = testArrays[4];
    std::cout << "Original array: ";
    printArray(arr5);
    SortingAlgorithms::quickSort(arr5);
    std::cout << "Sorted array: ";
    printArray(arr5);
}

int main() {
    testSortingAlgorithms();
    return 0;
}
