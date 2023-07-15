#include "main.h"

/**
 * main - Copy from one file to another
 * @ac: Number of arguments
 * @av: Array of given arguements
 *
 * Return: 0 or respective error code
 */
int main(int ac, char *av[])
{
	int rstat, ostat, nostat, wstat;
	char buffer[BSIZE];
	mode_t Permit = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ostat = open(av[1], O_RDONLY);
	if (ostat == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	nostat = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, Permit);
	if (nostat == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	rstat = 1;
	while (rstat)
	{
		rstat = read(ostat, buffer, BSIZE);
		if (rstat == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]), exit(98);
		if (rstat > 0)
		{
			wstat = write(nostat, buffer, rstat);
			if (wstat != rstat || wstat == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (close(ostat) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", av[1]), exit(100);
	if (close(nostat) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", av[2]), exit(100);
	return (0);
}
