#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *str)
{
    char *ptr = str;
    int upp = 1;

    while (*ptr != '\0') {
        switch (*ptr) {
            case ' ':
            case '\t':
            case '\n':
            case ',':
            case ';':
            case '.':
            case '!':
            case '?':
            case '"':
            case '(':
            case ')':
            case '{':
            case '}':
                upp = 1;
                break;
            default:
                if (upp) {
                    if (*ptr >= 'a' && *ptr <= 'z') {
                        *ptr -= 32;
                    }
                    upp = 0;
                }
                break;
        }
        ptr++;
    }
    return str;
}



