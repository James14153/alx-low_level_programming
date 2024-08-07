#include <stdio.h>

char *_strstr(const char *haystack, const char *needle) {
    // If needle is empty, return haystack
    if (*needle == '\0') {
        return (char *)haystack;
    }

    // Iterate through each character in haystack
    while (*haystack != '\0') {
        // Check if the current portion of haystack matches needle
        const char *h = haystack;
        const char *n = needle;
        
        while (*h != '\0' && *n != '\0' && *h == *n) {
            h++;
            n++;
        }

        // If we reached the end of needle, a match is found
        if (*n == '\0') {
            return (char *)haystack;
        }

        haystack++;
    }

    // If no match is found, return NULL
    return NULL;
}

int main() {
    char str[] = "hello, world";
    char substr[] = "world";

    char *result = _strstr(str, substr);

    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}

