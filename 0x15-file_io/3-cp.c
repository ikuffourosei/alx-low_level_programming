#include "main.h"

/**
 * _check_arg - checks for the number of arguments
 * @argc: number of arguments
 */
void _check_arg(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_file - a function that checks that file_from exists and can be read
 * @check: checks if True or False
 * @file: file_from name
 * @fdesf: file descriptor of file from, or -1
 * @fdest: file descriptor of file to, or -1
 */
void check_file(ssize_t check, char *file, int fdesf, int fdest)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fdesf != -1)
			close(fdesf);
		if (fdest != -1)
			close(fdest);
		exit(98);
	}
}

/**
 * check_file_created - a function checks that file_to was created and/or can be written to
 * @check: checks if True or False
 * @file: file to name
 * @fdesf: file descriptor of file from, or -1
 * @fdest: file descriptor of file to, or -1
 */
void check_file_created(ssize_t check, char *file, int fdesf, int fdest)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fdesf != -1)
			close(fdesf);
		if (fdest != -1)
			close(fdest);
		exit(99);
	}
}

/**
 * check_closed - fucntion that checks that file descriptors were closed
 * @check: checks if True or False
 * @fdes: File Descriptor
 */
void check_closed(int check, int fdes)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdes);
		exit(100);
	}
}
/**
 * main - creates duplicates of the content of a file to another file.
 * @argc: arguments counts
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int fdesf, fdest, close_to, close_from;
	ssize_t lenrd, lenwt;
	char ptr[1024];
	mode_t file_perm;

	_check_arg(argc);
	fdesf = open(argv[1], O_RDONLY);
	check_file((ssize_t)fdesf, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fdest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_file_created((ssize_t)fdest, argv[2], fdesf, -1);
	lenrd = 1024;
	while (lenrd == 1024)
	{
		lenrd = read(fdesf, ptr, 1024);
		check_file(lenrd, argv[1], fdesf, fdest);
		lenwt = write(fdest, ptr, lenrd);
		if (lenwt != lenrd)
			lenwt = -1;
		check_file_created(lenwt, argv[2], fdesf, fdest);
	}
	close_to = close(fdest);
	close_from = close(fdesf);
	check_closed(close_to, fdest);
	check_closed(close_from, fdesf);
	return (0);
}
