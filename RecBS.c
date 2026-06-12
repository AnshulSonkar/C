#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {

    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;

    if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);

    return binarySearch(arr, mid + 1, high, key);
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int result = binarySearch(arr, 0, n - 1, 40);

    if (result != -1)
        printf("Found at index %d", result);
    else
        printf("Not Found");

    return 0;
}