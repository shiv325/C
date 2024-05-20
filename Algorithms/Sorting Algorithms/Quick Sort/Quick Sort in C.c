// |=============================================================================================================================================================|
// |                                                                C Program : Quick Sort in C                                                                  |
// |=============================================================================================================================================================|

// Define Function to swap 2 numbers with help of another variable
void swap(int *A, int *B) {                                      // Parameters -> Int *A, Int *B
    int temp = *B;                                            // Assign value at address B to temp
    *B = *A;                                                    // Assign value at address A to address B
    *A = temp;                                                // Assign temp to address at address A
}

// Define function to return the correct index of pivoted element in array
int partition (int arr[], int low, int high) {                        // Parameters -> Int Array, Int low, Int high
    int pivot = arr[high];                                    // Pivot element = Value at last index
    int i = low - 1;                                        // i = (low - 1) i.e. just before first index
    for (int j = low; j < high; j++) {                          // for loop to increment j from 'low' to (high - 1)
        if (arr[j] < pivot) {                                // If value at 'j' < pivot
            i++;                                             // Increase i by 1
            swap (&arr[i], &arr[j]);                              // Swap value at 'i' with value at 'j'
        }
    }
    i++;                                                  // When loop is finished, increase 'i' by 1
    swap (&arr[i], &arr[high]);                              // Swap value at 'i' with value at 'high'
    return i;                                            // Return 'i' i.e. correct position of pivoted element
}

// Define function to quick sort the array
void quickSort (int arr[], int low, int high) {            // Parameters -> Int Array, Int low, Int high
    if (low < high) {                                          // If low < high
        int loc = partition (arr, low, high);                  // Function call partition to save the location of pivot element of array in variable 'loc'
        quickSort (arr, low, loc - 1);                         // Recursively call function quickSort for left sub-array i.e. from index 'low' to (loc - 1)
        quickSort (arr, loc + 1, high);                        // Recursively call function quickSort for right sub-array i.e. from index (loc + 1) to 'high'
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
        printf("%d ", array[i]);                                      // Use for loop to pr/int the original array
    }
    quickSort(array, N);                                      // Function Call quickSort to sort the array
    printf("\nSorted Array => ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);                                      // Use for loop to print the sorted array
    }
    return 0;
}
