#include <stdio.h>

char *_strpbrk(const char *s, const char *accept) {
    const char *a;

    // Iterate over each character in s
    while (*s != '\0') {
        // Check if the current character of s is in accept
        for (a = accept; *a != '\0'; a++) {
            if (*s == *a) {
                return (char *)s; // Return the current position in s
            }
        }
        s++;
    }

    // If no character from accept is found in s, return NULL
    return NULL;
}

int main() {
    char str[] = "hello, world";
    char accept[] = "ow";

    char *result = _strpbrk(str, accept);

    if (result != NULL) {
        printf("First occurrence: '%c' at position: %ld\n", *result, result - str);
    } else {
        printf("No character from accept found in the string.\n");
    }

    return 0;
}

