#include "shell.h"
/**
 * main - function that forks out some code
 *
 * Return: 0 if successful
 */

int main(void)
{
	pid_t pid;
	
	printf("Before fork I was one\n");
	fork();
	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return 1;
	}
	printf("After fork I became two\n");
	return (0);
}
