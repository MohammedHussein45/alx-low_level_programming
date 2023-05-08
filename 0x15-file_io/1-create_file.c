#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to create.
 * @text_content: string to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int file, writefile, counter = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (counter = 0; text_content[counter];)
counter++;
}
file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
writefile = write(file, text_content, counter);
if (file == -1 || writefile == -1)
return (-1);
close(file);
return (1);
}
