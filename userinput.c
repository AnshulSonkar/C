#include <stdio.h>

int main() {

    int n, key;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1;
    int found = 0;

    while (low <= high) {

        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Found at position %d", mid);
            found = 1;
            break;
        }

        if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (!found)
        printf("Element not found");

    return 0;
}