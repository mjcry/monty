#include "monty.h"

/**
 * error_pchar - Prints an error for pchar function on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_pchar(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
