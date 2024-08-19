#include <stdio.h>

int _strlen(const char *s) {
    int length = 0;

    // Iterate over the characters of the string
    while (*s != '\0') {
        length++;
        s++;
    }

    return length;
}

int main() {
    char str[] = "Hello, world!";
    int length = _strlen(str);

    printf("The length of the string \"%s\" is %d.\n", str, length);

    return 0;
}

