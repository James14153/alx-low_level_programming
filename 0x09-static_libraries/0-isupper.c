#include <stdio.h>

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z');
}

int main() {
    char c = 'G';
    if (_isupper(c)) {
        printf("%c is an uppercase letter.\n", c);
    } else {
        printf("%c is not an uppercase letter.\n", c);
    }
    return 0;
}

