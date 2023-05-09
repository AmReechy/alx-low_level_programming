#ifndef NAME
#define NAME

/* let's put the header files below */

#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <sys/stat.h>

#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
