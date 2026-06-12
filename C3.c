#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;

        if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int n = 5;

    int pos = binarySearch(arr, n, 20);

    if (pos != -1)
        printf("Found at index %d", pos);
    else
        printf("Not Found");

    return 0;
}