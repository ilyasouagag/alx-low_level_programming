#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
void exit_with_error(int code, const char *message, const char *filename);
void close_file(int fd);
int append_text_to_file(const char *filename, char *text_content);
#endif
