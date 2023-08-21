#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int alphabet = 'a';

        for ( ; alphabet <= 'z' ; alphabet++)
        {
        putchar(alphabet);
        }
        putchar('\n');
        return (0);

}
