#include "main.h"
#include <readline/readline.h>
#include <readline/history.h>

/**
 * main - main function for the simple shell
 * @ac: number of arguments
 * @av: arguments to be used
 *
 * Return: (0) always if successful
 */
int main(int ac, char **argv)
{
        char *line = NULL;

        while (1)
        {
                line = read_line(">> ");
		
		if (!line)
		{
			break;
		}
		add_history(line);
		printf("You entered: %s\n", line);
		free(line);
        }
	return(0);
}
