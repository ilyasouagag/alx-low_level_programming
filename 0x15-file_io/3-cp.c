#include "main.h"
/**
 * exit_with_error - combinate dprintf and exit
 * @code: number of exit
 * @message: message
 * @filename: parameter
 */
void exit_with_error(int code, const char *message, const char *filename) {
    dprintf(STDERR_FILENO, message, filename);
    exit(code);
}
/**
 * main - program that copies the content of a file to another
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fp, f;
	ssize_t p, pf;
	char buffer[1024];

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to\n", NULL);
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	f = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0644);
	if (f == -1)
		exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
	while ((p = read(fp, buffer, sizeof(buffer))) > 0)
	{
		pf = write(f, buffer, p);
		if (pf == -1)
			exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	if (p == -1)
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	if (close(fp) == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", fp);
	if (close(f) == -1)
		exit_with_error(100, "Error: Can't close fd %d\n", f);
	return (0);
}
