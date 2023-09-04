#include "main.h"
/**
 * main - program that copies the content of a file to another
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int fp, f, p;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0644);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	while ((p = read(fp, buffer, 1024)) > 0)
		if ((write(f, buffer, p)) != p)
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
	if (p == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	fp = close(fp);
	f = close(f);
	if (fp)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
		exit(100);
	}
	if (f)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	return (0);
}
