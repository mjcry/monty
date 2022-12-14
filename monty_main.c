#include "monty.h"

/**
 * main - main of the monty interpreter
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */

int main(int argc, char **argv)
{
	stack_t *stack = NULL;


	if (argc != 2)
		return (error_usage());
	get_cmd(argv[1], &stack);
	free_dlistint(stack);
	return (0);
}
