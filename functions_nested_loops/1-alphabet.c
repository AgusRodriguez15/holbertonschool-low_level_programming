#include <stdio.h>

/**
 * main - print agus
 *
 * Return: Always 0 (Success)
 */
void print_alphabet() {


       char a = 97;


        while ( a < 123) {

        putchar(a);

        a++;

        }
        putchar('\n');
         
}
int main() {
    print_alphabet();   // Test the function
    return 0;
}

