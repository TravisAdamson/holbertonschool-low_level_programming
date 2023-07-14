#include "main.h"

/**
 * read_textfile - Reads a given file number
 * @filename: The name of the file to read
 * @letters: Number of letters to read/print
 *
 * Return: Number of letters read/printed or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int name, total, rstatus;
	char buffer(BSIZE);

	if (filename == NULL)
		return (0);
	name = open(filename, 0-RDONLY);
	if (name == -1)
		return (0);
	total = 0;
	rstatus = 1;
	while (letters > BSIZE && rstatus !=0)
	{
		rstatus = read(name, buffer, BSIZE);
		write(STDOUT_FILENO, buffer, rstatus);
		total += rstatus;
		letters -= BSIZE;
	}
	rstatus = read(name, buffer, letters);
	write(STDOUT_FILENO, buffer, rstatus);
	total += rstatus;
	close(name);
	return (total);
}
