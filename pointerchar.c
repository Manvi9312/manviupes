#include <stdio.h>

int main() {
    char arr[] = {'A', 'B', 'C', 'D', 'E'};
    char *p = arr;   // p points to first element

    printf("Initial value: %c\n", *p);

    p++;   // move to next character
    printf("After p++ : %c\n", *p);

    p++;   // move again
    printf("After another p++ : %c\n", *p);

    p--;   // move backward
    printf("After p-- : %c\n", *p);

    p--;   // move backward again
    printf("After another p-- : %c\n", *p);

    return 0;
}
