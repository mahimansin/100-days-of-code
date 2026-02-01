#include <stdio.h>
#include <stdlib.h>

void countingSort(int arr[], int n) {
    // 1. Find the maximum element
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    // 2. Initialize count array with 0
    int* count = (int*)calloc(max + 1, sizeof(int));
    int* output = (int*)malloc(n * sizeof(int));

    // 3. Store the count of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // 4. Update count[i] to store actual positions (Prefix Sum)
    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    // 5. Build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // 6. Copy sorted elements back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    free(count);
    free(output);
    
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter non-negative integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countingSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}