#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: first argument
 * @av: second argument
 * Return: NULL or charcter value
 */
char *argstostr(int ac, char **av)
{
	char *strArr;
	int len, i, index;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	strArr = (char *)malloc((len + 1) * sizeof(char));
	if (strArr == NULL)
	{
		return (NULL);
	}
	index = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(strArr + index, av[i]);
		index += strlen(av[i]);
		strArr[index] = '\n';
		index++;
	}
	strArr[index] = '\0';
	return (strArr);
}
