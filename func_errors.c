#include "monty.h"

/**
 * error_usage - Prints the error of usage on stderr
 *
 * Return: Always EXIT_FAILURE
 */

int error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * error_open - Prints the open's error on stderr
 * @filename : name of the file
 *
 * Return: Always EXIT_FAILURE
 */

int error_open(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * error_op - Prints the error of the command on stderr
 * @opcode: command
 * @line_number: the line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_op(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * error_malloc - Prints malloc's error on stderr
 *
 * Return: Always EXIT_FAILURE
 */

int error_malloc(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * error_push - Prints the error of usage of push on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_push(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
}
