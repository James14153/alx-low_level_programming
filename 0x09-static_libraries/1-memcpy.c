#include <stdio.h>

char *_memcpy(char *dest, const char *src, unsigned int n) {
    unsigned int i;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    return dest;
}

int main() {
    char src[11] = "HelloWorld";
    char dest[11];

    _memcpy(dest, src, 11);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}

