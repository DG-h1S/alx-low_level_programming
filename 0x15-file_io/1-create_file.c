#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
  register int _file, _write, text_len = 0;

  if (!(filename))
    {
      return (-1);
    }
  _file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
  if (_file == -1)
    {
      return (-1);
    }
  if (text_content)
    {
      while (text_content[text_len])
	{
	  text_len++;
	}
      _write = write(_file, text_content, text_len);
      if (_write == -1)
	{
	  return (-1);
	}
    }
  close(_file);
  return (1);
}

