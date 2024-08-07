#include <stdio.h>

char *_strncat(char *dest, const char *src, int n) {
    char *dest_ptr = dest;

    // Find the end of the destination string
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    // Append up to n characters from the source string to the destination string
    while (n > 0 && *src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
        n--;
    }

    // Null-terminate the concatenated string
    *dest_ptr = '\0';

    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world! This is a test.";

    _strncat(dest, src, 6);

    printf("Concatenated string: %s\n", dest);
    return 0;
}

