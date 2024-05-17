#include <stdio.h>

int linearSearch (int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main () {
    int N, data, searchIndex;
    printf("Enter the Number of Elements => ");
    scanf("%d", &N);
    int array[N];
    printf("Enter %d Space-Separated Elements => ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    printf("Array => ");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\nEnter the element to search => ");
    scanf("%d", &data);
    searchIndex = linearSearch(array, N, data);
    if (searchIndex < 0) {
        printf("Element not found");
    }
    else {
        printf("The element is found at index %d", searchIndex);
    }
    return 0;
}
