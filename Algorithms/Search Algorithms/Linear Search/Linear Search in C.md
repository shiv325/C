# Linear Search in C

    int linearSearch (int arr[], int size, int element) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                return i;
            }
        }
        return -1;
    }

Parameters :
  - Integer Array
  - Size
  - Target Element

Return :
  - Index of target element in the array, if found
  - -1 otherwise
