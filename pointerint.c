#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p;

    p = arr; // p points to the first element of the array

    printf("Initial pointer address: %p, value = %d\n", (void*)p, *p);

    // Pointer Increment
    p++;
    printf("After p++ : Address = %p, Value = %d\n", (void*)p, *p);

    // Pointer Increment again
    p++;
    printf("After another p++ : Address = %p, Value = %d\n", (void*)p, *p);

    // Pointer Decrement
    p--;
    printf("After p-- : Address = %p, Value = %d\n", (void*)p, *p);

    // Pointer Decrement again
    p--;
    printf("After another p-- : Address = %p, Value = %d\n", (void*)p, *p);

    return 0;
}
