#include <stdio.h>

int main() {

    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = 7;
    int key = 2;

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            ans = mid;
            high = mid - 1;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("First Occurrence = %d", ans);

    return 0;
}