#include "monty.h"

/**
 * split_cmd - split the command
 * @cmd: command to split
 *
 * Return: command splited or NULL if failed
 */

char *split_cmd(char *cmd)
{
	char *cmd_splited;

	cmd_splited = strtok(cmd, "\n ");
	if (cmd_splited == NULL)
		return (NULL);
	return (cmd_splited);
}
/**
 * check_cmd - check if the command is a function
 * @str: command
 *
 * Return: the function or NULL
 */

instruction_f check_cmd(char *str)
{
	int i = 0;

	instruction_t cmd[] = {
		{"push", my_push},
		{"pall", my_pall},
		{"pop", my_pop},
		{"swap", my_swap},
		{"add", my_add},
		{"nop", my_nop},
		{"pint", my_pint},
		{"div", my_div},
		{"mul", my_mul},
		{"mod", my_mod},
		{"sub", my_sub},
		{"pchar", my_pchar},
		{"pstr", my_pstr},
		{"rotl", my_rotl},
		{NULL, NULL}
	};

	while (cmd[i].f != NULL && strcmp(cmd[i].opcode, str) != 0)
		i++;
	return (cmd[i].f);
}

/**
 * get_cmd - get the command and parse it
 * @filename: file where the command is
 * @stack: stack
 *
 * Return: EXIT_SUCCESS on success or EXIT_FAILURE on failure
 */

int get_cmd(char *filename, stack_t **stack)
{
	char *buffer = NULL, *line;
	unsigned int line_number = 1;
	size_t i;
	instruction_f check;
	int read;
	int statut;
	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (error_open(filename));
	while ((read = getline(&buffer, &i, file)) != -1)
	{
		line = split_cmd(buffer);
		if (line == NULL || line[0] == '#')
		{
			line_number++;
			continue;
		}
		check = check_cmd(line);
		if (check == NULL)
			return (error_op(line, line_number));

		check(stack, line_number);
		line_number++;
	}
	free(buffer);
	statut = fclose(file);
	if (statut != 0)
		return (-1);
	return (0);
}
