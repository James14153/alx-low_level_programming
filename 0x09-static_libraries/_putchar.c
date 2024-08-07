#include <stdio.h>

int _putchar(char c) {
    return putchar(c);
}

int main() {
    char c = 'A';
    if (_putchar(c) == EOF) {
        printf("Error writing character.\n");
    } else {
        printf("\nCharacter written successfully.\n");
    }
    return 0;
}

