#include "main.h"

/**
 * append_text_to_file - Adds text to a file with a given name
 * @filename: Name given to save on the file
 * @text_content: The null term string to fill in
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fpoint;
	int wstat, length;

	if (filename == NULL)
		return (-1);
	fpoint = fopen(filename, "w+");
	if (fpoint == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fclose(fpoint);
		return (1);
	}
	for (length = 0; text_content[length]; length++)
		;
	wstat = fwrite(text_content, 1, length, fpoint);
	if (fclose(fpoint) == NULL)
		return (-1);
	if (wstat == -1)
		return (-1);
	else
		return (1);
}
