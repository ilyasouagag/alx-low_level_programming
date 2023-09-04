#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the file created
 * @text_content: content to append into the file
 * Return: return 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int p, fp;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
		while (text_content[len])
			len++;

	p = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (p == -1)
		return (-1);
	fp = write(p, text_content, len);
	if (fp == -1)
		return (-1);
	close(p);
	return (1);
}
