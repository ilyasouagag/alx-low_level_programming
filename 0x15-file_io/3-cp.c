#include "main.h"
/**
 * exit_with_error - combinate dprintf and exit
 * @code: number of exit
 * @message: message
 * @filename: parameter
 */
void exit_with_error(int code, const char *message, const char *filename)
{
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
	int from_fd, to_fd;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		exit_with_error(97, "Usage: cp file_from file_to\n", NULL);
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		close(from_fd);
		exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((bytes_read = read(from_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(from_fd);
			close(to_fd);
			exit_with_error(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(from_fd);
		close(to_fd);
		exit_with_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	close(from_fd);
	close(to_fd);
	return (0);
}
