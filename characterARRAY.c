#include <stdio.h>
#include <string.h>

int main(void) {
    char str[256];
    size_t i = 0;
    int c;

    printf("Enter a string: ");

    
    while ((c = getchar()) != EOF && c != '\n' && i < sizeof str - 1) {
        str[i++] = (char)c;
    }
    str[i] = '\0';

    if (i == 0 && c == EOF) return 0;

    size_t len = i;

    printf("Reversed string: ");
    for (size_t j = len; j-- > 0; ) putchar(str[j]);
    putchar('\n');

    return 0;
}