#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 * function should read and print.
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wt;
	char *file_ptr;

	if (filename == NULL)
		return (0);

	file_ptr = malloc(sizeof(char) * (letters + 1));
	if (file_ptr == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, file_ptr, letters);
	wt = write(STDOUT_FILENO, file_ptr, rd);

	if (op == -1)
	{
		free(file_ptr);
		return (0);
	}
	if (rd == -1)
	{
		free(file_ptr);
		return (0);
	}
	if (wt == -1 || wt != rd)
	{
		free(file_ptr);
		return (0);
	}
	free(file_ptr);
	close(op);

	return (wt);
}
