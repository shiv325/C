// |=============================================================================================================================================================|
// |                                                              C Program : Bubble Sort in C                                                                   |
// |=============================================================================================================================================================|

#include <stdio.h>

// Define function to perform Bubble Sort
void bubbleSort (int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
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
    bubbleSort(array, N);                                      // Function Call bubbleSort to sort the array
    printf("\nSorted Array => ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);                                      // Use for loop to print the sorted array
    }
    return 0;
}
