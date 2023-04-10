#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @file_name: A pointer to the name of the file.
 * @letters: The number of letters it should read and print.
 *
 * Return: fails or file_name is NULL - 0.
 * else number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *file_name, size_t letters)
{
	ssize_t file_descriptor, read_chars, write_chars;
	char *temp_buffer;

	if (file_name == NULL)
		return (0);

	temp_buffer = malloc(sizeof(char) * letters);

	if (temp_buffer == NULL)
		return (0);

	file_descriptor = open(file_name, O_RDONLY);
	read_chars = read(file_descriptor, temp_buffer, letters);
	write_chars = write(STDOUT_FILENO, temp_buffer, read_chars);

	if (file_descriptor == -1 || read_chars == -1 || write_chars == -1 ||
			write_chars != read_chars)
	{
		free(temp_buffer);
		return (0);
	}

	free(temp_buffer);
	close(file_descriptor);

	return (write_chars);
}
