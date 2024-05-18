// |=============================================================================================================================================================|
// |                                                               C Program : Binary Search                                                                     |
// |=============================================================================================================================================================|

#include <stdio.h>

// Note : Use this binary search only when the array is sorted in ascending order. For descending order, make the desired changes.

// Define function to perform Binary Search
int binarySearch (int arr[], int size, int target) {             // Parameters -> Integer Array, Integer Array Size, Integer Target
    int low = 0;                                              // Initialize low = 0 i.e. first index
    int mid;                                                  // Declare mid
    int high = size - 1;                                      // Initialize high = (size - 1) i.e. last index
    while (low <= high) {                                        // while loop iterates as long as : low <= high i.e. low must not exceed high
        mid = (low + high) / 2;                                // Find mid value of indexes 'low' & 'high' in the array from low to high
        if (arr[mid] == target) {                                // Check if the value stored at index 'mid' == target
            return mid;                                          // Return 'mid' if target is found
        }
        else if (arr[mid] < target) {                            // Check if value stored at index 'mid' < target
            low = mid + 1;                                       // Assign low = (mid + 1) as the target may be present on the right side of array
        }
        else {                                                 // Check if value stored at index 'mid' > target
            high = mid - 1;                                    // Assign low = (mid + 1) as the target may be present on the left side of array
        }
    }
    return -1;                                            // If the target value is not found, return -1
}

// Main Function
int main () {
    int N, target, searchIndex;                                        // Declare integer N, data, searchIndex
    printf("Enter the Number of Elements => ");
    scanf("%d", &N);                                                 // Take user input for Array size and store it in variable N
    int array[N];                                                    // Declare integer array of size N
    printf("Enter %d Space-Separated Elements => ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);                                      // Use for loop to assign a value to each index in array
    }
    printf("Array => ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);                                     // Use for loop to print the array
    }
    printf("\nEnter the element to search => ");
    scanf("%d", &target);                                              // Take user input for the target element to search in the array
    searchIndex = binarySearch(array, N, target);                      // Function Call binarySearch to search for target in the array
    if (searchIndex < 0) {
        printf("Element not found");                                    // If search is not successful, it prints "Element not found"
    }
    else {
        printf("The element is found at index %d", searchIndex);        // If search is successful, prints the index
    }
    return 0;
}
