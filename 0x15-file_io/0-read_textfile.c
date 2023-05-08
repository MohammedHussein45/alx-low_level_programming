#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT
 * @filename: text file
 * @letters: number of letters to be read
 * Return: number of bytes read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *x;
ssize_t file;
ssize_t writefile;
ssize_t readfile;

file = open(filename, O_RDONLY);
if (file == -1)
return (0);
x = malloc(sizeof(char) * letters);
readfile = read(file, x, letters);
writefile = write(STDOUT_FILENO, x, readfile);
free(x);
close(file);
return (writefile);
}
