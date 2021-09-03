#include "holberton.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
  int dest, size;
  char *buffer;
  if (filename == NULL)
    return (0);
  buffer = malloc(sizeof(char) * letters);
  if (buffer == NULL)
    return (0);
  dest = open(filename, O_RDONLY);
  size = write(STDOUT_FILENO, buffer, read(dest, buffer, letters));
  if (dest == -1 || size == -1)
    return (0);
  close(dest);
  free(buffer);
  return (size);
}
