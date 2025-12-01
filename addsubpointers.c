#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;   // start at first element (10)

    printf("Starting value: %d\n", *p);

    // Addition of integer to pointer
    p = p + 2;   // move forward by 2 elements
    printf("After p = p + 2 : %d\n", *p);

    
    p = p - 1;  
    printf("After p = p - 1 : %d\n", *p);

    // Add another integer
    p = p + 1;   // move forward by 1 element
    printf("After p = p + 1 : %d\n", *p);

    return 0;
}
