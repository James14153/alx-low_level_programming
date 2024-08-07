#include <stdio.h>

void _puts(char *s) {
    // Iterate over the string and print each character
    while (*s != '\0') {
        putchar(*s);
        s++;
    }
    // Print a newline character at the end
    putchar('\n');
}

int main() {
    char str[] = "Hello, world!";

    _puts(str);

    return 0;
}

