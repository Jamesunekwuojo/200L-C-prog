#include <stdio.h>
int main(){
    int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int arr[] = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 23;
    
    // Perform linear search
    int result = linearSearch(arr, n, key);
    
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }
    
    return 0;
}