# Merge Sort in C

### 1. MergeSort Function

    void mergeSort (int arr[], int low, int high) {
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSort (arr, low, mid);
            mergeSort (arr, mid + 1, high);
            merge (arr, low, mid, high);
        }
        
    }

Parameters :
  - Int Array
  - Int low
  - Int high

Return :
  - Return Type -> None

### 2. Merge Function

    void merge (int arr[], int left, int mid, int right) {
        int leftSize = mid - left + 1;
        int rightSize = right - mid;
        int leftArray[leftSize];
        int rightArray[rightSize];
        for (int i = 0; i < leftSize; i++) {
            leftArray[i] = arr[left + i];
        }
        for (int i = 0; i < rightSize; i++) {
            rightArray[i] = arr[mid + i + 1];
        }
        int l = 0;
        int r = 0;
        int i = left;
        while (l < leftSize && r < rightSize) {
            if (leftArray[l] < rightArray[r]) {
                arr[i] = leftArray[l];
                l++;
            }
            else {
                arr[i] = rightArray[r];
                r++;
            }
            i++;
        }
        while (l < leftSize) {
            arr[i] = leftArray[l];
            l++;
            i++;
        }
        while (r < rightSize) {
            arr[i] = rightArray[r];
            r++;
            i++;
        }
    }
Parameters :
  - Integer Array
  - Int left i.e. lowest index
  - Int mid i.e. middle index
  - Int high i.e. highest index

Return :
  - Return Type -> None
