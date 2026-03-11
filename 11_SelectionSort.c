


#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        // Assume the current index is the minimum
        minIndex = i;

        // Find the index of the smallest element in the remaining array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("The original array before selection sort is: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    selectionSort(arr, n);

    printf("The array after the selection sort is :\n ");
    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");

    return 0;
}

