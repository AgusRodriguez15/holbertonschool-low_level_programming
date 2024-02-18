#include <stdio.h>

void print_alphabet_x10(void) {
    for (int i = 0; i < 10; i++) {
        char letter = 'a';
        while (letter <= 'z') {
            _putchar(letter); // Print the current letter
            letter++;        // Move to the next letter
        }
        _putchar('\n');     // Print a newline after printing all letters
    }
}

int main() {
    print_alphabet_x10();   // Test the function
    return 0;
}

