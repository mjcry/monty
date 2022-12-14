#include "monty.h"

/**
 * error_zero - Prints an error for div function on if one of the numbers is 0
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_zero(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_mul - Prints an error for div function on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_mul(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_mod - Prints an error for div function on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_mod(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_sub - Prints an error for sub function on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_sub(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

/**
 * error_ascii - Prints an error for pchar function on stderr
 * @line_number: line where the error is
 *
 * Return: Always EXIT_FAILURE
 */

int error_ascii(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
	exit(EXIT_FAILURE);
}
