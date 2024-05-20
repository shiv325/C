# Quick Sort in C

### 1. Swap Function

    void swap(int *A, int *B) {
        int temp = *B;
        *B = *A;
        *A = temp;
    }

Parameters :
  - Address of Int A
  - Address of Int B

Return :
  - Return Type -> None

### 2. Partition Function

    int partition (int arr[], int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                swap (&arr[i], &arr[j]);
            }
        }
        i++;
        swap (&arr[i], &arr[high]);
        return i;
    }

Parameters :
  - Integer Array
  - Int low i.e. lowest index
  - Int high i.e. highest index 

Return :
  - Return Type -> Integer i.e. correct index position of pivot element

### 3. Quick Sort Function

    void quickSort (int arr[], int low, int high) {
        if (low < high) {
            int loc = partition (arr, low, high);
            quickSort (arr, low, loc - 1);
            quickSort (arr, loc + 1, high);
        }
    }

Parameters :
  - Integer Array
  - Int low i.e. lowest index
  - Int high i.e. highest index

Return :
  - Return Type -> None
