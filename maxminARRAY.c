#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements in array: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);
    int min = findMin(arr, size);

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
