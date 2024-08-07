#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
    unsigned int i;
    for (i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

int main() {
    char buffer[10];
    _memset(buffer, 'A', sizeof(buffer));
    buffer[9] = '\0'; // Null-terminate the buffer for printing

    printf("Buffer after _memset: %s\n", buffer);
    return 0;
}

