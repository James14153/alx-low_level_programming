#include <stdio.h>

int _putchar(char c) {
    return putchar(c);
}

int main() {
<<<<<<< HEAD
    char c = 'A';
    if (_putchar(c) == EOF) {
        printf("Error writing character.\n");
    } else {
        printf("\nCharacter written successfully.\n");
    }
=======
    char ch = 'A';

    _putchar(ch);
    _putchar('\n');

>>>>>>> a62642604212631d6041755641bb5279d413dd66
    return 0;
}

