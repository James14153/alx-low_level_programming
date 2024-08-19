#include <stdio.h>

char *_strcpy(char *dest, const char *src) {
    char *original_dest = dest;

    // Copy each character from src to dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    // Add the terminating null byte
    *dest = '\0';

    return original_dest;
}

int main() {
    char src[] = "Hello, world!";
    char dest[50];

    _strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

