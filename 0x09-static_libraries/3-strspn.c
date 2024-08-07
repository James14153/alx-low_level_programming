#include <stdio.h>

unsigned int _strspn(const char *s, const char *accept) {
    const char *p;
    unsigned int length = 0;

    // Iterate over each character in s
    while (*s) {
        // Check if the current character of s is in accept
        p = accept;
        while (*p) {
            if (*s == *p) {
                break; // Character found in accept
            }
            p++;
        }
        // If character not found in accept, break the loop
        if (*p == '\0') {
            break;
        }
        length++;
        s++;
    }

    return length;
}

int main() {
    char str[] = "abc123";
    char accept[] = "abc";

    unsigned int length = _strspn(str, accept);

    printf("Length of initial segment: %u\n", length);

    return 0;
}

