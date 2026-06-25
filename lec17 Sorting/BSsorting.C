#include <stdio.h>

int main() {

    int arr[] = {50, 20, 10, 40, 30};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int key = 40;
    int low = 0, high = n - 1;

    while(low <= high) {

        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            printf("Found");
            return 0;
        }

        if(key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Not Found");

    return 0;
}