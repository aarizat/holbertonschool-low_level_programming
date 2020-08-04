#include <unistd.h>
#include <stdlib.h>
#include <sys/fcntl.h>
/**
 * read_textfile - read a textfile.
 * @filename: name of the file to open.
 * @letters: number of letters to print in the standar ouput.
 *
 * Return: number of letter printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd_read, count_chars;
	char *buf_letters;
	int fd_open;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);
	buf_letters = malloc(sizeof(char) * letters);
	if (buf_letters == NULL)
		return (0);
	fd_read = read(fd_open, buf_letters, letters);
	if (fd_read == -1)
		return (0);
	count_chars = write(1, buf_letters, letters);
	if (count_chars == -1)
		return (0);
	return (count_chars);
}