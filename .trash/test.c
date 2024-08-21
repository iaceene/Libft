#include <stdio.h>

// Custom implementation of isdigit
int my_isdigit(int c) {
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int main() {
    char testChar = 'A'; // Non-digit character

    if (!my_isdigit(testChar)) {
        printf("%c is not a digit.\n", testChar);
    } else {
        printf("%c is a digit.\n", testChar);
    }

    return 0;
}
