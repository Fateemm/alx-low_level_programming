#include "main.h"

/**
 * print_alphabet - Prints the uppercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        _putchar(letter);
    }

    _putchar('\n');
}
