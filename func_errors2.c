#include "monty.h"

/**
 * error_pop - Prints the error of usage of pop on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */
int error_pop(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_swap - Prints the error of usage of swap on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_swap(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_add - Prints the error of usage of add on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_add(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_div - Prints an error for div function on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_div(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_pint - Prints an error for pint function on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_pint(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
