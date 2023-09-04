#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the file created
 * @text_content: content to append into the file
 * Return: return 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int p;
	int i = 0, len = 0;
	int fp;

	if (filename == NULL)
		return (-1);
	while (text_content[i] && text_content != NULL)
	{
		len++;
		i++;
	}
	p = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (p == -1)
		return (-1);
	fp = write(p, text_content, len);
	close(p);
	if (fp == -1)
		return (-1);
	return (1);
}
