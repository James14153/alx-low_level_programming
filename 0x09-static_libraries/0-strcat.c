#include <stdio.h>

char *_strcat(char *dest, const char *src) {
    char *dest_ptr = dest;

    // Find the end of the destination string
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    // Append the source string to the destination string
    while (*src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    // Null-terminate the concatenated string
    *dest_ptr = '\0';

    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";

    _strcat(dest, src);

    printf("Concatenated string: %s\n", dest);
    return 0;
}

