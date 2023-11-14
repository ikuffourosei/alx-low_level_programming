#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 *            of any of the characters in the string accept
 * @s: input string
 * @accept: string containing characters to search for
 * Return: pointer to the first occurrence of any character in accept in s,
 *         or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        if (_strchr(accept, *s) != NULL)
            return s;
        s++;
    }

    return NULL;
}

