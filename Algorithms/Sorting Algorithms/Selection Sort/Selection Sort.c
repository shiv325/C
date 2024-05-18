// |=============================================================================================================================================================|
// |                                                               C Program : Binary Search                                                                     |
// |=============================================================================================================================================================|

#include <stdio.h>

// Define function to perform Selection Sort
void selectionSort (int arr[], int size) {                  // Parameters -> Int Array, Int Array Size
    int minIndex;                                               // Declare minIndex
    for (int i = 0; i < size - 1; i++) {                    // for loop from first to 2nd last index
        minIndex = i;                                          // Set minIndex = i
        for (int j = i + 1; j < size; j++) {                      // for loop from (i + 1) to last index
            if (arr[j] < arr[minIndex]) {                               // if value at 'j' is less than value at 'minIndex',
                minIndex = j;                                           // minIndex = j
            }
        }
        if (i != minIndex) {                              // if 'i' are 'mindIndex' different,
            int temp = arr[i];                            // swap values at indices 'i' and 'minIndex'
            arr[i] = arr[minIndex];                       // by using another variable temp
            arr[minIndex] = temp;
        }
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
    selectionSort(array, N);                                      // Function Call selectionSort to sort the array
    printf("\nSorted Array => ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);                                      // Use for loop to print the sorted array
    }
    return 0;
}
