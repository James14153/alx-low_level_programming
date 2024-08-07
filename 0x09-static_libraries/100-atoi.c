#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int _atoi(char *s) {
    int result = 0;
    int sign = 1;
    bool has_started = false;

    // Iterate over the characters of the string
    while (*s) {
        // Skip any leading whitespace
        if (!has_started && (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\v' || *s == '\f' || *s == '\r')) {
            s++;
            continue;
        }

        // Handle optional sign
        if (!has_started && (*s == '-' || *s == '+')) {
            sign = (*s == '-') ? -1 : 1;
            has_started = true;
            s++;
            continue;
        }

        // If the current character is not a digit, break the loop
        if (*s < '0' || *s > '9') {
            break;
        }

        has_started = true;

        // Accumulate the digit value
        result = result * 10 + (*s - '0');

        s++;
    }

    return result * sign;
}

int main() {
    char str1[] = "   -1234";
    char str2[] = "5678";
    char str3[] = "42abc";
    char str4[] = "   +2147483647"; // INT_MAX
    char str5[] = "   -2147483648"; // INT_MIN

    printf("%d\n", _atoi(str1)); // Output: -1234
    printf("%d\n", _atoi(str2)); // Output: 5678
    printf("%d\n", _atoi(str3)); // Output: 42
    printf("%d\n", _atoi(str4)); // Output: 2147483647
    printf("%d\n", _atoi(str5)); // Output: -2147483648

    return 0;
}

