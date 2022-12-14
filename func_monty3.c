#include "monty.h"
#include <unistd.h>

/**
 * is_empty - chack if stack is empty
 * @stack: stack to check
 *
 * Return: empty stack
 */
int is_empty(stack_t **stack)
{
	if ((*stack) == NULL)
		return (0);
	return (1);
}

/**
 * my_pint - print last put element
 * @stack: stack to check
 * @line_number: line of the command
 */
void my_pint(stack_t **stack, unsigned int line_number)
{
	if (is_empty(stack) == 0)
	{
		error_pint(line_number);
		return;
	}
	printf("%d\n", (*stack)->n);
}
/**
 * my_sub - sub the second element by the first element
 * @stack: stack where the two elements are
 * @line_number: line of the command
 */

void my_sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		error_sub(line_number);
		return;
	}
	(*stack)->next->n -= (*stack)->n;
	my_pop(stack, line_number);
}

/**
 * my_pchar - print ASCII value of int
 * @stack: stack
 * @line_number: line to check
 *
 * Return: nothing
 */
void my_pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int c;

	if (is_empty(stack) == 0)
	{
		error_pchar(line_number);
		return;
	}
	c = tmp->n;

	if (!isprint(c))
	{
		error_ascii(line_number);
		return;
	}
	else
	{
		_putchar(c);
		_putchar('\n');
	}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
