# Binary Search in C

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

Condition to Perform :
  - Array should be sorted in Ascending Order.
> Note : To perform binary search on array in Descending Order, make the desired changes

Parameters :
  - Integer Array
  - Size
  - Target Element

Return :
  - Return Type -> Integer
  - Index of target element in the array, if found
  - -1 otherwise
