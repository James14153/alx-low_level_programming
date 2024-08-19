#include <stdio.h>

char *_strchr(const char *s, char c) {
    // Iterate over the characters of the string
    while (*s) {
        if (*s == c) {
            return (char *)s;
        }
        s++;
    }

    // Check if the null terminator is the character we are looking for
    if (*s == c) {
        return (char *)s;
    }

    // If the character is not found, return NULL
    return NULL;
}

int main() {
    char str[] = "Hello, world!";
    char ch = 'o';
    char *result = _strchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}

