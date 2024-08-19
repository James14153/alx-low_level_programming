#include <stdio.h>

char *_strncpy(char *dest, const char *src, int n) {
    int i;

    // Copy up to n characters from src to dest
    for (i = 0; i < n; i++) {
        if (*src != '\0') {
            dest[i] = *src;
            src++;
        } else {
            dest[i] = '\0'; // Pad with null bytes if src is shorter than n
        }
    }

    return dest;
}

int main() {
    char src[] = "Hello, world!";
    char dest[20];

    _strncpy(dest, src, 10);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

