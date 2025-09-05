//4. Write a C program to demonstrate the use of pre-increment (++x) and post-increment (x++) on a variable. Print the value of the variable before and after each operation.
#include <stdio.h>

int main() {
    int x = 5;

    printf("Initial value of x = %d\n", x);

    // Post-increment: value is used first, then increased
    printf("\nPost-increment (x++):\n");
    printf("Value used = %d\n", x++);  
    printf("Value after increment = %d\n", x);

    // Reset x for clarity
    x = 5;

    // Pre-increment: value is increased first, then used
    printf("\nPre-increment (++x):\n");
    printf("Value used = %d\n", ++x);  
    printf("Value after increment = %d\n", x);

    return 0;
}