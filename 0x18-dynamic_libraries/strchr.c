#include "main.h"

/**
 * _strchr - locates the first occurrence of the character c in the string s
 * @s: input string
 * @c: character to locate
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
            return s;
        s++;
    }

    return (*s == c) ? s : NULL;
}

