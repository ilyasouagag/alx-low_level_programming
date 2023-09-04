#include "main.h"
/**
 * main - program that copies the content of a file to another
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int fp, f;
	ssize_t p, pf;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0644);
	if (f == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((p = read(fp, buffer, sizeof(buffer))) > 0)
	{
		pf = write(f, buffer, p);
		if (pf == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fp) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp), exit(100);
	if (close(f) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f), exit(100);
	return (0);
}
