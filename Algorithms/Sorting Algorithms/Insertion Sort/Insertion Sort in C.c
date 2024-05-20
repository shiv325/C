// |=============================================================================================================================================================|
// |                                                              C Program : Insertion Sort in C                                                                |
// |=============================================================================================================================================================|

#include <stdio.h>

// Define function to perform Insertion Sort
void insertionSort (int arr[], int size) {
    int temp, j;
    for (int i = 1; i < size; i++) {
        temp = arr[i];
        j = i - 1;
        while ((j >= 0) && (arr[j] > temp)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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
    insertionSort(array, N);                                      // Function Call insertionSort to sort the array
    printf("\nSorted Array => ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);                                      // Use for loop to print the sorted array
    }
    return 0;
}
