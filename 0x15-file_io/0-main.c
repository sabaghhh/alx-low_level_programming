#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile reads text from a file and prints it @filename: name of file to read
 * @filename: name of file to read
 * @letters: number of bytes to read
 * 
 * Return: number bytes read/printed
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}
	res = append_text_to_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
