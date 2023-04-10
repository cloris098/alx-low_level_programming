#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

char *create_buffer(void);
void close_file(int filedesc);

/**
 * create_buffer - allocates a buffer of size BUFFER_SIZE.
 *
 * Return: a pointer to the newly-allocated buffer.
 */

char *create_buffer(void)
{
	char *buff;

	buff = malloc(sizeof(char) * BUFFER_SIZE);

	if (buff == NULL)
	{
		perror("Error");
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes file descriptors.
 * @filedesc: The file descriptor to be closed.
 */

void close_file(int filedesc)
{
	int cl;

	cl = close(filedesc);

	if (cl == -1)
	{
		perror("Error");
		exit(100);
	}
}

/**
 * main - copies the contents of one file to another.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buff;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer();
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((rd = read(from, buff, BUFFER_SIZE)) > 0)
	{
		wr = write(to, buff, rd);
		if (wr == -1)
		{
			perror("Error");
			free(buff);
			exit(99);
		}
	}

	if (rd == -1 || from == -1)
	{
		perror("Error");
		free(buff);
		exit(98);
	}

	free(buff);
	close_file(from);
	close_file(to);

	return (0);
}
