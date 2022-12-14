#include "monty.h"

/**
 * my_pstr - print string of stack
 * @stack: stack to print
 * @line_number: line to check
 *
 * Return: nothing
 */
void my_pstr(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *tmp = *stack;
	int c;

	if (is_empty(stack) == 0)
	{
		_putchar('\n');
		return;
	}

	while (tmp != NULL)
	{
		c = tmp->n;
		if (c == 0)
			break;
		if (!isprint(c))
			break;
		_putchar(c);
		tmp = tmp->next;
	}
	printf("\n");
}
/**
 * my_rotl - rotates the stack to the top
 * @stack: stack
 * @line_number: unused
 */

void my_rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *new = *stack;
	int nb1, nb2;

	if (*stack == NULL)
		return;
	while (new->next != NULL)
		new = new->next;
	while (new)
	{
		if (!new->next)
		{
			nb1 = new->n;
			new->n = (*stack)->n;
		}
		else
		{
			nb2 = new->n;
			new->n = nb1;
			nb1 = nb2;
		}
		new = new->next;
	}
}
