#include <stdio.h>
#include <ctype.h> // For islower() in <ctype.h> library

int _islower(int c) {
    // Check if the character is a lowercase letter
    return (c >= 'a' && c <= 'z');
}

int main() {
    char ch1 = 'a';
    char ch2 = 'Z';

    printf("Character '%c' is %slowercase.\n", ch1, _islower(ch1) ? "" : "not ");
    printf("Character '%c' is %slowercase.\n", ch2, _islower(ch2) ? "" : "not ");

    return 0;
}

