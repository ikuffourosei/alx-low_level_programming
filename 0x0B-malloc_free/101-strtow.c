#include <stdlib.h>
#include <string.h>
#include "main.h"

int countWords(const char *str) {
    int count = 0, isWord = 0;

    while (*str) {
        if (*str++ != ' ' && !isWord) {
            count++;
            isWord = 1;
        } else if (*str == ' ') {
            isWord = 0;
        }
    }

    return (count);
}

char **strtow(char *str)
{
	int numWords, i, j, wordLength;
	char **wordArray;
	char *wordStart;

	if (!str || !*str)
        return (NULL);

    numWords = countWords(str);
    wordArray = malloc((numWords + 1) * sizeof(char *));
    if (!wordArray)
        return (NULL);

    i = 0;
    while (*str) {
        if (*str != ' ') {
            wordStart = str;
            while (*str && *str != ' ')
                str++;
            wordLength = str - wordStart;
            wordArray[i] = malloc((wordLength + 1) * sizeof(char));
            if (!wordArray[i]) {
                for (j = 0; j < i; j++)
                    free(wordArray[j]);
                free(wordArray);
                return (NULL);
            }
            strncpy(wordArray[i], wordStart, wordLength);
            wordArray[i++][wordLength] = '\0';
        } else {
            str++;
        }
    }
    wordArray[i] = NULL;
    return (wordArray);

    return (NULL);
}
