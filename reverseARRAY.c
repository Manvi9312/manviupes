#include <stdio.h>

void reverse(int arr[], int n) {
    printf("Reversed array: ");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int size;
    printf("enter number of elments in array: ");
    scanf("%d",&size);
    int n, arr[size];

    printf("Enter elements: ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);

    return 0;
}
