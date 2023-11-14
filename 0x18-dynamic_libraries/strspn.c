#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s
 *            which consists only of characters in accept
 * @s: input string
 * @accept: string containing acceptable characters
 * Return: number of characters in the initial segment of s
 *         consisting only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;

    while (*s != '\0')
    {
        found = 0;
        while (*accept != '\0')
        {
            if (*s == *accept)
            {
                count++;
                found = 1;
                break;
            }
            accept++;
        }

        if (!found)
            break;

        s++;
    }

    return count;
}

