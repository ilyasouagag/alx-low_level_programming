#include "main.h"
/**
 * append_text_to_file - function that appends text at the end
 * @filename: the file created
 * @text_content: content to append into the file
 * Return: return 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, fp;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
		while (text_content[len])
			len++;
	f = open(filename, O_RDWR | O_APPEND);
	if (f == -1)
		return (-1);
	fp = write(f, text_content, len);
	if (fp == -1)
		return (-1);
	return (1);
}
