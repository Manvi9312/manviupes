#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverse(char str[]) {
    int i, len;
    char temp;

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);   // reads a single word

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
