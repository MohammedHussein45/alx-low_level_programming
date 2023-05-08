#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, writefile, counter = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (counter = 0; text_content[counter];)
counter++;
}
file = open(filename, O_WRONLY | O_APPEND);
writefile = write(file, text_content, counter);
if (file == -1 || writefile == -1)
return (-1);
close(file);
return (1);
}
