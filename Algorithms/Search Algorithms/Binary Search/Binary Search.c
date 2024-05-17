// |=============================================================================================================================================================|
// |                                                               C Program : Binary Search                                                                     |
// |=============================================================================================================================================================|

#include <stdio.h>

// Define function to perform Binary Search
int binarySearch (int arr[], int size, int target) {
    int low = 0;
    int mid;
    int high = size - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
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
    searchIndex = linearSearch(array, N, target);                      // Function Call linearSearch to search for target in the array
    if (searchIndex < 0) {
        printf("Element not found");                                    // If search is not successful, it prints "Element not found"
    }
    else {
        printf("The element is found at index %d", searchIndex);        // If search is successful, prints the index
    }
    return 0;
}
