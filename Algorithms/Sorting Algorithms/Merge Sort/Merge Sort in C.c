// |=============================================================================================================================================================|
// |                                                                 C Program : Merge Sort in C                                                                 |
// |=============================================================================================================================================================|

#include <stdio.h>

// Define function to divide the array into subarrays
void mergeSort (int arr[], int low, int high) {                // Parameters -> Int Array, Int low, Int high
    if (low < high) {                                            // If low < high
        int mid = (low + high) / 2;                              // Find mid index
        mergeSort (arr, low, mid);                                   // Recursively Divide the original array into left subarray
        mergeSort (arr, mid + 1, high);                              // and right subarray
        merge (arr, low, mid, high);                              // Merge both left and right subarrays
    }
    
}

// Define function to merge the divided subarrays
void merge (int arr[], int left, int mid, int right) {                    // Parameters -> Int Array, Int left, Int mid, Int right
    int leftSize = mid - left + 1;                                      // Find Size of Left Subarray
    int rightSize = right - mid;                                        // Find Size of Right Subarray
    int leftArray[leftSize];                                              // Declare left subarray of size 'leftSize'
    int rightArray[rightSize];                                            // Declare right subarray of size 'rightSize'
    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = arr[left + i];                             // for loop to initialize leftArray with the values
    }
    for (int i = 0; i < rightSize; i++) {
        rightArray[i] = arr[mid + i + 1];                             // for loop to initialize rightArray with the values
    }
    int l = 0;                                                    // Initialize l = 0
    int r = 0;                                                    // Initialize r = 0
    int i = left;                                                 // Initialize i = 0
    while (l < leftSize && r < rightSize) {                            // while loop iterates as long as l < leftSize and r < rightSize
        if (leftArray[l] < rightArray[r]) {                                // If leftArray's current value is smaller than rightArrays's current value
            arr[i] = leftArray[l];                                         // Set leftArray's current value to arr[i]
            l++;                                                           // Increment 'l' to change leftArray's current value
        }
        else {                                                            // If leftArray's current value is than than rightArrays's current value
            arr[i] = rightArray[r];                                       // Set rightArray's current value to arr[i]
            r++;                                                          // Increment 'r' to change rightArray's current value
        }
        i++;                                                        // Increment 'i' by 1
    }
    while (l < leftSize) {
        arr[i] = leftArray[l];                                      // Merge remaining elements of leftArray
        l++;
        i++;
    }
    while (r < rightSize) {
        arr[i] = rightArray[r];                                      // Merge remaining elements of rightArray
        r++;
        i++;
    }
}

// Main Function
int main () {
    int N;                                                                  // Declare integer N
    printf("Enter the Number of Elements => ");
    scanf("%d", &N);                                                 // Take user input for Array size and store it in variable N
    int array[N];                                                    // Declare integer array of size N
    printf("Enter %d Space-Separated Elements => ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);                                      // Use for loop to assign a value to each index in array
    }
    printf("Original Array => ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);                                      // Use for loop to print the original array
    }
    mergeSort(array, 0, N - 1);                                      // Function Call mergeSort to sort the array
    printf("\nSorted Array => ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);                                      // Use for loop to print the sorted array
    }
    return 0;
}
